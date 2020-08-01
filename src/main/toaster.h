#ifndef SRC_MAIN_TOASTER_H_
#define SRC_MAIN_TOASTER_H_

#include <string>
#include "bakery.h"

class Toaster
{
    std::string name;
    int num_slot;

public:
    Toaster(std::string name, int num_slot) : name(name), num_slot(num_slot){};
    ~Toaster() = default;

    // toast a piece of bread
    int ToastBread(Bread &bread)
    {
        std::cout << "Toasting bread: " << bread.GetName() << std::endl;
        return 0;
    };
};
#endif // SRC_MAIN_TOASTER_H
