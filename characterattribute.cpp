#include "characterattribute.h"

CharacterAttribute::CharacterAttribute(int modify_cost)
    : modifier_(0),
      modify_cost_(modify_cost)
{

}

void CharacterAttribute::set_modifier(int modifier)
{
    modifier_ = modifier;
}

int CharacterAttribute::cost() const
{
    return modifier_ * modify_cost_;
}