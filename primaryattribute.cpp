#include "primaryattribute.h"

PrimaryAttribute::PrimaryAttribute(int default_value, int modifier_cost)
    : CharacterAttribute(modifier_cost),
      default_value_(default_value)

{
    
}

int PrimaryAttribute::value() const
{
    return default_value_ + modifier_;
}