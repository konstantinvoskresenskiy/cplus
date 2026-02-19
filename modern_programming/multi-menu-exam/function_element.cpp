#include "menu_elements.h"
#include "function_elements.h"
#include <cstdlib>
#include <iostream>

const vka::MenuItem* vka::show_menu(const MenuItem* current){
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Образовака > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const vka::MenuItem* vka::exit(const MenuItem* current) {
    std::exit(0);
}

const vka::MenuItem* vka::go_back(const MenuItem* current){
    return current->parent->parent;
}


const vka::MenuItem* vka::institutes_itmo(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const vka::MenuItem* vka::institutes_spbstu(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const vka::MenuItem* vka::institutes_etu(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}


const vka::MenuItem* vka::spbu_amcp(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const vka::MenuItem* vka::spbu_math(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const vka::MenuItem* vka::spbu_ling(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}