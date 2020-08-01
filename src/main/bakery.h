#ifndef SRC_MAIN_BAKERY_H_
#define SRC_MAIN_BAKERY_H_

#include <string>
#include <ctime>

class Bread
{
    std::string name;
    int time_to_toasted;

public:
    Bread(std::string name) : name(name){};
    ~Bread() = default;

    std::string GetName()
    {
        return this->name;
    };
    // compares the bread's toast_time with the bread's time_to_toasted, returns true if greater or equal, if not return false.
    bool IsToasted(int toast_time)
    {
        if (toast_time < time_to_toasted)
        {
            return false;
        }
        return true;
    };
};
#endif // SRC_MAIN_BAKERY
