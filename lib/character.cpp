#include "character.h"
#include "primaryattribute.h"

Character::Character(const std::string& name)
    : name_(name)
{
    attributes_[CharacterAttribute::Types::ST] = std::make_shared<PrimaryAttribute>(10, 10);
    attributes_[CharacterAttribute::Types::IQ] = std::make_shared<PrimaryAttribute>(10, 20);
    attributes_[CharacterAttribute::Types::DX] = std::make_shared<PrimaryAttribute>(10, 20);
    attributes_[CharacterAttribute::Types::HT] = std::make_shared<PrimaryAttribute>(10, 10);
}

std::string Character::name() const
{
    return name_;
}

std::shared_ptr<CharacterAttribute> Character::attribute(CharacterAttribute::Types attribute)
{
    return attributes_.at(attribute);
}