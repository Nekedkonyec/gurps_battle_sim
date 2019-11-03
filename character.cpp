#include "character.h"

Character::Character(const std::string& name)
    : name_(name),
      attributes_({
          {AttributeTypes::ST, CharacterAttribute()},
          {AttributeTypes::IQ, CharacterAttribute()},
          {AttributeTypes::DX, CharacterAttribute()},
          {AttributeTypes::HT, CharacterAttribute()}
      })
{

}

std::string Character::name() const
{
    return name_;
}

int Character::attribute_value(AttributeTypes attribute) const
{
    return attributes_.at(attribute).value();
}

void Character::set_attribute_value(AttributeTypes attribute, int value)
{
    attributes_.at(attribute).set_value(value);
}