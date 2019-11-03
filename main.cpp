#include "character.h"

#include <iostream>

int main(int, char**)
{
    Character sanyi("Sanyi");

    sanyi.set_attribute_value(AttributeTypes::ST, 11);
    sanyi.set_attribute_value(AttributeTypes::IQ, 12);
    sanyi.set_attribute_value(AttributeTypes::DX, 13);
    sanyi.set_attribute_value(AttributeTypes::HT, 14);

    std::cout << "Name: " << sanyi.name() << std::endl;
    std::cout << "ST: " << sanyi.attribute_value(AttributeTypes::ST) << std::endl;
    std::cout << "IQ: " << sanyi.attribute_value(AttributeTypes::IQ) << std::endl;
    std::cout << "DX: " << sanyi.attribute_value(AttributeTypes::DX) << std::endl;
    std::cout << "HT: " << sanyi.attribute_value(AttributeTypes::HT) << std::endl;
}