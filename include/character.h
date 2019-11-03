#ifndef GURPS_CHARACTER_H
#define GURPS_CHARACTER_H

#include <string>

class Character
{
public:
    Character(const std::string& name);

    std::string name() const;

private:
    std::string name_;
};

#endif