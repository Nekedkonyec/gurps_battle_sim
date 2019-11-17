#ifndef GURPS_CHARACTER_H
#define GURPS_CHARACTER_H

#include "attributetypes.h"

#include <map>
#include <memory>
#include <string>

class CharacterAttribute;

class Character
{
public:
    Character(const std::string& name);

    std::string name() const;
    std::shared_ptr<CharacterAttribute> attribute(AttributeTypes attribute);

private:
    std::string name_;
    std::map<AttributeTypes, std::shared_ptr<CharacterAttribute>> attributes_;
};

#endif