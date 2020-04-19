#ifndef GURPS_SECONDARYATTRIBUTE_H
#define GURPS_SECONDARYATTRIBUTE_H

#include "character.h"
#include "characterattribute.h"

class SecondaryAttribute : public CharacterAttribute
{
public:
    SecondaryAttribute(const Character::AttributeMapType& attributes, int modifier_cost);

    int value() const override = 0;

protected:
    const Character::AttributeMapType& attributes_;
};

class AttributeHP : public SecondaryAttribute
{
public:
    AttributeHP(const Character::AttributeMapType& attributes);

    int value() const override;
};


class AttributeWill : public SecondaryAttribute
{
public:
    AttributeWill(const Character::AttributeMapType& attributes);

    int value() const override;
};


class AttributePer : public SecondaryAttribute
{
public:
    AttributePer(const Character::AttributeMapType& attributes);

    int value() const override;
};


class AttributeFP : public SecondaryAttribute
{
public:
    AttributeFP(const Character::AttributeMapType& attributes);

    int value() const override;
};

#endif