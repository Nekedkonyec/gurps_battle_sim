#ifndef GURPS_CHARACTERATTRIBUTE_H
#define GURPS_CHARACTERATTRIBUTE_H

#include <string>

class CharacterAttribute
{
public:
    CharacterAttribute();

    int value() const;
    void set_value(int value);

private:
    int value_;
};

#endif