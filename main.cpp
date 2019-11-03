#include "character.h"

#include <iostream>

int main(int, char**)
{
    Character sanyi("Sanyi");
    Character xalgasi("Xalgasi");
    std::cout << sanyi.name() << std::endl;
    std::cout << xalgasi.name() << std::endl;
}