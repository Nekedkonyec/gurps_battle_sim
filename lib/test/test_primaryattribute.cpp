#include "primaryattribute.h"

#include <catch2/catch.hpp>

SCENARIO("ST Attribute", "[PrimaryAttributes]")
{
    GIVEN("DefaultAttribute")
    {
        AttributeST ST;
        THEN("Everything must be default")
        {
            REQUIRE(ST.value() == 10);
            REQUIRE(ST.cost() == 0);
        }
    }
    GIVEN("Attribute with positive modifier")
    {
        AttributeST ST;
        ST.set_modifier(2);
        THEN("Value and cost must be modified")
        {
            REQUIRE(ST.value() == 12);
            REQUIRE(ST.cost() == 20);
        }

    }
    GIVEN("Attribute with negative modifier")
    {
        AttributeST ST;
        ST.set_modifier(-3);
        THEN("Value and cost must be modified")
        {
            REQUIRE(ST.value() == 7);
            REQUIRE(ST.cost() == -30);
        }
    }
}

SCENARIO("DX Attribute", "[PrimaryAttributes]")
{
    GIVEN("DefaultAttribute")
    {
        AttributeDX DX;
        THEN("Everything must be default")
        {
            REQUIRE(DX.value() == 10);
            REQUIRE(DX.cost() == 0);
        }
    }
    GIVEN("Attribute with positive modifier")
    {
        AttributeDX DX;
        DX.set_modifier(2);
        THEN("Value and cost must be modified")
        {
            REQUIRE(DX.value() == 12);
            REQUIRE(DX.cost() == 40);
        }

    }
    GIVEN("Attribute with negative modifier")
    {
        AttributeDX DX;
        DX.set_modifier(-3);
        THEN("Value and cost must be modified")
        {
            REQUIRE(DX.value() == 7);
            REQUIRE(DX.cost() == -60);
        }
    }
}

SCENARIO("IQ Attribute", "[PrimaryAttributes]")
{
    GIVEN("DefaultAttribute")
    {
        AttributeIQ IQ;
        THEN("Everything must be default")
        {
            REQUIRE(IQ.value() == 10);
            REQUIRE(IQ.cost() == 0);
        }
    }
    GIVEN("Attribute with positive modifier")
    {
        AttributeIQ IQ;
        IQ.set_modifier(2);
        THEN("Value and cost must be modified")
        {
            REQUIRE(IQ.value() == 12);
            REQUIRE(IQ.cost() == 40);
        }

    }
    GIVEN("Attribute with negative modifier")
    {
        AttributeIQ IQ;
        IQ.set_modifier(-3);
        THEN("Value and cost must be modified")
        {
            REQUIRE(IQ.value() == 7);
            REQUIRE(IQ.cost() == -60);
        }
    }
}

SCENARIO("HT Attribute", "[PrimaryAttributes]")
{
    GIVEN("DefaultAttribute")
    {
        AttributeHT HT;
        THEN("Everything must be default")
        {
            REQUIRE(HT.value() == 10);
            REQUIRE(HT.cost() == 0);
        }
    }
    GIVEN("Attribute with positive modifier")
    {
        AttributeHT HT;
        HT.set_modifier(2);
        THEN("Value and cost must be modified")
        {
            REQUIRE(HT.value() == 12);
            REQUIRE(HT.cost() == 20);
        }

    }
    GIVEN("Attribute with negative modifier")
    {
        AttributeHT HT;
        HT.set_modifier(-3);
        THEN("Value and cost must be modified")
        {
            REQUIRE(HT.value() == 7);
            REQUIRE(HT.cost() == -30);
        }
    }
}