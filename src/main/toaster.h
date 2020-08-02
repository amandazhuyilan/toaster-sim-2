#ifndef SRC_MAIN_TOASTER_H_
#define SRC_MAIN_TOASTER_H_

#include <string>
#include "bakery.h"

int add(int op1, int op2)
{
    return op1 + op2;
}

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
        std::cout << "Toasting " << bread.GetName() << " bread. Time now (millisecss): " << toast_time << std::endl;

        if (toast_time >= bread.GetMillisecsToToasted())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    };
};
#endif // SRC_MAIN_TOASTER_H
