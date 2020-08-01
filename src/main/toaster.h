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

    // check if bread is toasted
    int ToastBread(Bread &bread, long int &toast_time)
    {
        std::cout << "Toasting bread: " << bread.GetName() << " time now: " << toast_time << std::endl;

        if (toast_time >= bread.GetSecsToToasted())
        {
            return 1;
        }

        return 0;
    };
};
#endif // SRC_MAIN_TOASTER_H
