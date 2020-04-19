#include "primaryattribute.h"
#include "secondaryattribute.h"

#include <catch2/catch.hpp>

SCENARIO("HP Attribute", "[SecondaryAttributes]")
{
    GIVEN("DefaultAttribute")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::ST] = std::make_shared<AttributeST>();
        AttributeHP HP(attributes);
        THEN("Everything must be default")
        {
            REQUIRE(HP.value() == 10);
            REQUIRE(HP.cost() == 0);
        }
    }
    GIVEN("Origin attribute modified")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::ST] = std::make_shared<AttributeST>();
        AttributeHP HP(attributes);
        attributes[CharacterAttribute::Types::ST]->set_modifier(4);
        THEN("Value must be modified, but cost must remain")
        {
            REQUIRE(HP.value() == 14);
            REQUIRE(HP.cost() == 0);
        }

    }
    GIVEN("Secondary attribute modified")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::ST] = std::make_shared<AttributeST>();
        AttributeHP HP(attributes);
        HP.set_modifier(5);
        THEN("Value and cost must be modified")
        {
            REQUIRE(HP.value() == 15);
            REQUIRE(HP.cost() == 10);
        }
    }
    GIVEN("Both attributes modified")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::ST] = std::make_shared<AttributeST>();
        AttributeHP HP(attributes);
        HP.set_modifier(-1);
        attributes[CharacterAttribute::Types::ST]->set_modifier(-1);
        THEN("Value and cost must be modified")
        {
            REQUIRE(HP.value() == 8);
            REQUIRE(HP.cost() == -2);
        }
    }
}


SCENARIO("Will Attribute", "[SecondaryAttributes]")
{
    GIVEN("DefaultAttribute")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::IQ] = std::make_shared<AttributeIQ>();
        AttributeWill Will(attributes);
        THEN("Everything must be default")
        {
            REQUIRE(Will.value() == 10);
            REQUIRE(Will.cost() == 0);
        }
    }
    GIVEN("Origin attribute modified")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::IQ] = std::make_shared<AttributeIQ>();
        AttributeWill Will(attributes);
        attributes[CharacterAttribute::Types::IQ]->set_modifier(4);
        THEN("Value must be modified, but cost must remain")
        {
            REQUIRE(Will.value() == 14);
            REQUIRE(Will.cost() == 0);
        }

    }
    GIVEN("Secondary attribute modified")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::IQ] = std::make_shared<AttributeIQ>();
        AttributeWill Will(attributes);
        Will.set_modifier(5);
        THEN("Value and cost must be modified")
        {
            REQUIRE(Will.value() == 15);
            REQUIRE(Will.cost() == 25);
        }
    }
    GIVEN("Both attributes modified")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::IQ] = std::make_shared<AttributeIQ>();
        AttributeWill Will(attributes);
        Will.set_modifier(-1);
        attributes[CharacterAttribute::Types::IQ]->set_modifier(-1);
        THEN("Value and cost must be modified")
        {
            REQUIRE(Will.value() == 8);
            REQUIRE(Will.cost() == -5);
        }
    }
}


SCENARIO("Per Attribute", "[SecondaryAttributes]")
{
    GIVEN("DefaultAttribute")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::IQ] = std::make_shared<AttributeIQ>();
        AttributePer Per(attributes);
        THEN("Everything must be default")
        {
            REQUIRE(Per.value() == 10);
            REQUIRE(Per.cost() == 0);
        }
    }
    GIVEN("Origin attribute modified")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::IQ] = std::make_shared<AttributeIQ>();
        AttributePer Per(attributes);
        attributes[CharacterAttribute::Types::IQ]->set_modifier(4);
        THEN("Value must be modified, but cost must remain")
        {
            REQUIRE(Per.value() == 14);
            REQUIRE(Per.cost() == 0);
        }

    }
    GIVEN("Secondary attribute modified")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::IQ] = std::make_shared<AttributeIQ>();
        AttributePer Per(attributes);
        Per.set_modifier(5);
        THEN("Value and cost must be modified")
        {
            REQUIRE(Per.value() == 15);
            REQUIRE(Per.cost() == 25);
        }
    }
    GIVEN("Both attributes modified")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::IQ] = std::make_shared<AttributeIQ>();
        AttributePer Per(attributes);
        Per.set_modifier(-1);
        attributes[CharacterAttribute::Types::IQ]->set_modifier(-1);
        THEN("Value and cost must be modified")
        {
            REQUIRE(Per.value() == 8);
            REQUIRE(Per.cost() == -5);
        }
    }
}


SCENARIO("FP Attribute", "[SecondaryAttributes]")
{
    GIVEN("DefaultAttribute")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::HT] = std::make_shared<AttributeHT>();
        AttributeFP FP(attributes);
        THEN("Everything must be default")
        {
            REQUIRE(FP.value() == 10);
            REQUIRE(FP.cost() == 0);
        }
    }
    GIVEN("Origin attribute modified")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::HT] = std::make_shared<AttributeHT>();
        AttributeFP FP(attributes);
        attributes[CharacterAttribute::Types::HT]->set_modifier(4);
        THEN("Value must be modified, but cost must remain")
        {
            REQUIRE(FP.value() == 14);
            REQUIRE(FP.cost() == 0);
        }

    }
    GIVEN("Secondary attribute modified")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::HT] = std::make_shared<AttributeHT>();
        AttributeFP FP(attributes);
        FP.set_modifier(5);
        THEN("Value and cost must be modified")
        {
            REQUIRE(FP.value() == 15);
            REQUIRE(FP.cost() == 15);
        }
    }
    GIVEN("Both attributes modified")
    {
        Character::AttributeMapType attributes;
        attributes[CharacterAttribute::Types::HT] = std::make_shared<AttributeHT>();
        AttributeFP FP(attributes);
        FP.set_modifier(-1);
        attributes[CharacterAttribute::Types::HT]->set_modifier(-1);
        THEN("Value and cost must be modified")
        {
            REQUIRE(FP.value() == 8);
            REQUIRE(FP.cost() == -3);
        }
    }
}