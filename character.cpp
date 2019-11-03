#include "character.h"

Character::Character(const std::string& name) : name_(name)
{

}

std::string Character::name() const
{
    return name_;
}