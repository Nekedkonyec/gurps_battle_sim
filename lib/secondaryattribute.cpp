#include "secondaryattribute.h"

SecondaryAttribute::SecondaryAttribute(const Character::AttributeMapType& attributes, int modifier_cost)
    : CharacterAttribute(modifier_cost),
      attributes_(attributes)
{

}

AttributeHP::AttributeHP(const Character::AttributeMapType& attributes)
    : SecondaryAttribute(attributes, 2)
{

}

int AttributeHP::value() const
{
    return attributes_.at(CharacterAttribute::Types::ST)->value() + modifier_;
}

AttributeWill::AttributeWill(const Character::AttributeMapType& attributes)
    : SecondaryAttribute(attributes, 5)
{

}

int AttributeWill::value() const
{
    return attributes_.at(CharacterAttribute::Types::IQ)->value() + modifier_;
}

AttributePer::AttributePer(const Character::AttributeMapType& attributes)
    : SecondaryAttribute(attributes, 5)
{
    
}

int AttributePer::value() const
{
    return attributes_.at(CharacterAttribute::Types::IQ)->value() + modifier_;
}

AttributeFP::AttributeFP(const Character::AttributeMapType& attributes)
    : SecondaryAttribute(attributes, 3)
{
    
}

int AttributeFP::value() const
{
    return attributes_.at(CharacterAttribute::Types::HT)->value() + modifier_;
}