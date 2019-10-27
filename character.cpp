#include "character.h"

Character::Character() : name_("Xalgasi")
{

}

std::string Character::name() const
{
    return name_;
}