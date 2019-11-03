#include "character.h"

#include <iostream>

int main(int, char**)
{
    Character sanyi("Sanyi");

    sanyi.set_st(12);
    sanyi.set_iq(11);

    std::cout << "Name: " << sanyi.name() << std::endl;
    std::cout << "ST: " << sanyi.st() << std::endl;
    std::cout << "IQ: " << sanyi.iq() << std::endl;
}