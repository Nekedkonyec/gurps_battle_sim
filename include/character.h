#ifndef GURPS_CHARACTER_H
#define GURPS_CHARACTER_H

#include <map>
#include <string>

#include "attributetypes.h"
#include "characterattribute.h"

class Character
{
public:
    Character(const std::string& name);

    std::string name() const;
    int attribute_value(AttributeTypes attribute) const;
    void set_attribute_value(AttributeTypes attribute, int value);

private:
    std::string name_;
    std::map<AttributeTypes, CharacterAttribute> attributes_;
};

#endif