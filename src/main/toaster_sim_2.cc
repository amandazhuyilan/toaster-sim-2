// #include "lib/hello-time.h"
// #include "main/hello-greet.h"
#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <thread>

#include "bakery.h"
#include "toaster.h"

int main(int argc, char **argv)
{
  // create bread and toaster
  Bread b1 = Bread("white", 10);
  Toaster t1 = Toaster("toaster1", 2);

  auto toaster_start = std::chrono::system_clock::now();
  bool is_toast_ready = false;

  while (!is_toast_ready)
  {
    auto now = std::chrono::system_clock::now();
    auto toast_time = std::chrono::duration_cast<std::chrono::seconds>(now - toaster_start).count();

    if (t1.ToastBread(b1, toast_time) == 1)
    {
      is_toast_ready = true;
    }
  }
  // std::this_thread::sleep_for(std::chrono::milliseconds(x));

  // toast bread
  std::cout << "Your bread is ready!" << std::endl;
  return 0;
}
