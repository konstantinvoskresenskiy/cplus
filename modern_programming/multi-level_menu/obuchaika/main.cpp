#include <clocale>
#include <iostream>

#include "menu.h"
#include "menu_elements.h"
#include "function_elements.h"


int main() {
    std::setlocale(LC_ALL, "");
    std::cout << "Обучайка приветсвует тебя,мой юный друг!\n";
    const KVoskresenskiy::MenuItem *current = &KVoskresenskiy::MAIN_LEVEL0;

    do {
        current = current->itemfunction(current);
    } while (true);

    return 0;
}