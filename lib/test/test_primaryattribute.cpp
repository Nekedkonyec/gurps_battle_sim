#include "primaryattribute.h"

#include <catch2/catch.hpp>

SCENARIO("PrimaryAttributes", "[Attributes]")
{
    GIVEN("ST Attribute")
    {
        AttributeST ST;
        THEN("Value must be 10")
        {
            REQUIRE(ST.value() == 10);
        }
    }
    GIVEN("DX Attribute")
    {
        AttributeDX DX;
        THEN("Value must be 10")
        {
            REQUIRE(DX.value() == 10);
        }
    }
    GIVEN("IQ Attribute")
    {
        AttributeIQ IQ;
        THEN("Value must be 10")
        {
            REQUIRE(IQ.value() == 10);
        }
    }
    GIVEN("HT Attribute")
    {
        AttributeHT HT;
        THEN("Value must be 10")
        {
            REQUIRE(HT.value() == 10);
        }
    }
}