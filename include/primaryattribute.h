#ifndef GURPS_PRIMARYATTRIBUTE_H
#define GURPS_PRIMARYATTRIBUTE_H

#include "characterattribute.h"

class PrimaryAttribute : public CharacterAttribute
{
public:
    PrimaryAttribute(int default_value, int modifier_cost);

    int value() const override;

private:
    const int default_value_;
};

#endif