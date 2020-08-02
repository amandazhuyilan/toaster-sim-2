#ifndef SRC_MAIN_BAKERY_H_
#define SRC_MAIN_BAKERY_H_

#include <string>
#include <ctime>

class Bread
{
    std::string name;
    long int millisecs_to_toasted;

public:
    Bread(std::string name, int millisecs_to_toasted) : name(name), millisecs_to_toasted(millisecs_to_toasted){};
    ~Bread() = default;

    std::string GetName()
    {
        return this->name;
    };

    int GetMillisecsToToasted()
    {
        return this->millisecs_to_toasted;
    };
};
#endif // SRC_MAIN_BAKERY
