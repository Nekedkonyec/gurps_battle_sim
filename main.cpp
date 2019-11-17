#include "character.h"
#include "characterattribute.h"

#include <iostream>

int main(int, char**)
{
    Character sanyi("Sanyi");

    sanyi.attribute(AttributeTypes::ST)->set_modifier(1);
    sanyi.attribute(AttributeTypes::IQ)->set_modifier(2);
    sanyi.attribute(AttributeTypes::DX)->set_modifier(3);
    sanyi.attribute(AttributeTypes::HT)->set_modifier(4);

    std::cout << "Name: " << sanyi.name() << std::endl;
    std::cout << "ST: " << sanyi.attribute(AttributeTypes::ST)->value() << " [" << sanyi.attribute(AttributeTypes::ST)->cost() << "]" << std::endl;
    std::cout << "IQ: " << sanyi.attribute(AttributeTypes::IQ)->value() << " [" << sanyi.attribute(AttributeTypes::IQ)->cost() << "]" << std::endl;
    std::cout << "DX: " << sanyi.attribute(AttributeTypes::DX)->value() << " [" << sanyi.attribute(AttributeTypes::DX)->cost() << "]" << std::endl;
    std::cout << "HT: " << sanyi.attribute(AttributeTypes::HT)->value() << " [" << sanyi.attribute(AttributeTypes::HT)->cost() << "]" << std::endl;
}