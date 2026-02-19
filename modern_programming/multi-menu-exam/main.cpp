#include <clocale>
#include <iostream>

#include "menu.h"
#include "menu_elements.h"
#include "function_elements.h"

int main()
{
    std::setlocale(LC_ALL, "");

    const vka::MenuItem* current = &vka::MAIN;
    do {
        current = current->func(current);
    } while (true);

    return 0;
}