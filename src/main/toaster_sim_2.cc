// #include "lib/hello-time.h"
// #include "main/hello-greet.h"
#include <iostream>
#include <string>
#include <ctime>

#include "bakery.h"
#include "toaster.h"

int main(int argc, char **argv)
{
  // create bread and toaster
  Bread b1 = Bread("white");
  Toaster t1 = Toaster("toaster1", 2);
  t1.ToastBread(b1);
  return 0;
}
