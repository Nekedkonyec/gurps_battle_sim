#ifndef GURPS_CHARACTER_H
#define GURPS_CHARACTER_H

#include <string>
#include "characterattribute.h"

class Character
{
public:
    Character(const std::string& name);

    std::string name() const;
    int st() const;
    void set_st(int value);
    int iq() const;
    void set_iq(int value);

private:
    std::string name_;
    CharacterAttribute st_;
    CharacterAttribute iq_;
};

#endif