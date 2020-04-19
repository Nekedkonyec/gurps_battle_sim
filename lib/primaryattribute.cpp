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

AttributeST::AttributeST ()
    : PrimaryAttribute(10, 10)
{

}

AttributeDX::AttributeDX ()
    : PrimaryAttribute(10, 20)
{

}

AttributeIQ::AttributeIQ ()
    : PrimaryAttribute(10, 20)
{

}

AttributeHT::AttributeHT ()
    : PrimaryAttribute(10, 10)
{

}