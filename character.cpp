#include "character.h"
#include "primaryattribute.h"

Character::Character(const std::string& name)
    : name_(name),
      attributes_({
          {AttributeTypes::ST, std::make_shared<PrimaryAttribute>(10, 10)},
          {AttributeTypes::IQ, std::make_shared<PrimaryAttribute>(10, 20)},
          {AttributeTypes::DX, std::make_shared<PrimaryAttribute>(10, 20)},
          {AttributeTypes::HT, std::make_shared<PrimaryAttribute>(10, 10)}
      })
{

}

std::string Character::name() const
{
    return name_;
}

std::shared_ptr<CharacterAttribute> Character::attribute(AttributeTypes attribute)
{
    return attributes_.at(attribute);
}