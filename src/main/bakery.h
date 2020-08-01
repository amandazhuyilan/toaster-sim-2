#ifndef SRC_MAIN_BAKERY_H_
#define SRC_MAIN_BAKERY_H_

#include <string>
#include <ctime>

class Bread
{
    std::string name;
    long int secs_to_toasted;

public:
    Bread(std::string name, int secs_to_toasted) : name(name), secs_to_toasted(secs_to_toasted){};
    ~Bread() = default;

    std::string GetName()
    {
        return this->name;
    };

    int GetSecsToToasted()
    {
        return this->secs_to_toasted;
    };
};
#endif // SRC_MAIN_BAKERY
