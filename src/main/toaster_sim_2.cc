// #include "lib/hello-time.h"
// #include "main/hello-greet.h"
#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <thread>

#include "bakery.h"
#include "toaster.h"

std::chrono::milliseconds MILLISEC_PER_TICK(1000);

int main(int argc, char **argv)
{
  // create bread and toaster
  Bread b1 = Bread("white", 10000);
  Toaster t1 = Toaster("toaster1", 2);

  auto toaster_start_time = std::chrono::system_clock::now();
  bool is_toast_ready = false;

  while (!is_toast_ready)
  {
    auto tick_start_time = std::chrono::system_clock::now();
    // all Toast related functions to be called per tick goes below here
    auto toast_time_millisecs = std::chrono::duration_cast<std::chrono::milliseconds>(tick_start_time - toaster_start_time).count();

    if (t1.ToastBread(b1, toast_time_millisecs) == 1)
    {
      is_toast_ready = true;
    }

    // check if the all the above functions were completed within one tick's time.
    // sleep thread if this there are extra time leftover.
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now() - tick_start_time);
    if (elapsed < MILLISEC_PER_TICK)
    {
      std::chrono::duration<double, std::milli> sleep_time = MILLISEC_PER_TICK - elapsed;
      std::cout << "Sleeping for (ms) " << sleep_time.count() << std::endl;
      std::this_thread::sleep_for(sleep_time);
    }
    else
    {
      std::cout << "[WARN] Tick took more time than expected! (" << elapsed.count() << " ms)" << std::endl;
    }
  }

  std::cout << "Toast is ready!" << std::endl;
  return 0;
}
