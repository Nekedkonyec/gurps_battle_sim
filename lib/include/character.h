#ifndef GURPS_CHARACTER_H
#define GURPS_CHARACTER_H

#include "characterattribute.h"

#include <map>
#include <memory>
#include <string>

class Character
{
public:
    Character(const std::string& name);

    using AttributeMapType = std::map<CharacterAttribute::Types, std::shared_ptr<CharacterAttribute>>;

    std::string name() const;
    std::shared_ptr<CharacterAttribute> attribute(CharacterAttribute::Types attribute);

private:
    std::string name_;
    AttributeMapType attributes_;
};

#endif