#include "characterattribute.h"

CharacterAttribute::CharacterAttribute()
    :  value_(10)
{

}

int CharacterAttribute::value() const
{
    return value_;
}

void CharacterAttribute::set_value(int value)
{
    value_ = value;
}