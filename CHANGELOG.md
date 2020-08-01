#### 08-01-2020
* Added basic bread functionalities (`getName()`, `getToastTime()`)
* Added basic toast method `ToastBread` - while bread is not done, keep checking if bread is done until it is ready.
* [TODO] sleep thread until next second tick with `std::this_thread::sleep_for(std::chrono::milliseconds(x))`
* [TODO] enable input from command line when launching toaster-sim-2.
* [TODO] add GTEST and populate unittests.