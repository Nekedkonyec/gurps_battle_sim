#ifndef GURPS_CHARACTERATTRIBUTE_H
#define GURPS_CHARACTERATTRIBUTE_H

#include <string>

class CharacterAttribute
{
public:
    CharacterAttribute(int modify_cost);

    virtual int value() const = 0;
    void set_modifier(int modifier);
    int cost() const;

protected:
    int modifier_;
    const int modify_cost_;
};

#endif