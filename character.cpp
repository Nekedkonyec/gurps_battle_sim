#include "character.h"

Character::Character(const std::string& name)
    : name_(name),
      st_(),
      iq_()
{

}

std::string Character::name() const
{
    return name_;
}

int Character::st() const
{
    return st_.value();
}

void Character::set_st(int value)
{
    st_.set_value(value);
}

int Character::iq() const
{
    return iq_.value();
}

void Character::set_iq(int value)
{
    iq_.set_value(value);
}