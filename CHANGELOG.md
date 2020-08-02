#### 08-02-2020
- `sleep()` main thread for extra time between `ToastBread()` execution time and time per tick.
- set up test framework with google-test in `test/` folder and `BUILD` files.
- [TODO] Write unit test for at least `ToastBread()`.
- [TODO] enable input from command line for `Bread` and `Toaster`.
#### 08-01-2020
* Added basic bread functionalities (`getName()`, `getToastTime()`)
* Added basic toast method `ToastBread()` - while bread is not done, keep checking if bread is done until it is ready.
* [TODO] sleep thread until next second tick with `std::this_thread::sleep_for(std::chrono::milliseconds(x))`
* [TODO] enable input from command line when launching toaster-sim-2.
* [TODO] add GTEST and populate unittests.