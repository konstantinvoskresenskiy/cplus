#include "menu_elements.h"

#include "function_elements.h"

const vka::MenuItem vka::SPBU_AMCP = {
    "1 - Факультет ПМ-ПУ", vka::spbu_amcp, &vka::INSTITUTES_SPBU
};
const vka::MenuItem vka::SPBU_MATH = {
    "2 - Факультет МатМех", vka::spbu_math, &vka::INSTITUTES_SPBU
};
const vka::MenuItem vka::SPBU_LING = {
    "3 - Лингвистический факультет", vka::spbu_ling, &vka::INSTITUTES_SPBU
};
const vka::MenuItem vka::SPBU_GO_BACK = {
    "0 - Выйти в предыдущее меню", vka::go_back, &vka::INSTITUTES_SPBU
};

namespace {
    const vka::MenuItem* const spbu_children[] = {
        &vka::SPBU_GO_BACK,
        &vka::SPBU_AMCP,
        &vka::SPBU_MATH,
        &vka::SPBU_LING
    };
    const int spbu_size = sizeof(spbu_children) / sizeof(spbu_children[0]);
}

const vka::MenuItem vka::INSTITUTES_SPBU = {
    "1 - СПбГУ", vka::show_menu, &vka::SEE_INSTITUTES, spbu_children, spbu_size
};

const vka::MenuItem vka::INSTITUTES_ITMO = {
    "2 - ИТМО", vka::institutes_itmo, &vka::SEE_INSTITUTES
};
const vka::MenuItem vka::INSTITUTES_SPBSTU = {
    "3 - Политех", vka::institutes_spbstu, &vka::SEE_INSTITUTES
};
const vka::MenuItem vka::INSTITUTES_ETU = {
    "4 - ЛЭТИ", vka::institutes_etu, &vka::SEE_INSTITUTES
};
const vka::MenuItem vka::INSTITUTES_GO_BACK = {
    "0 - Выйти в главное меню", vka::go_back, &vka::SEE_INSTITUTES
};

namespace {
    const vka::MenuItem* const institutes_children[] = {
        &vka::INSTITUTES_GO_BACK,
        &vka::INSTITUTES_SPBU,
        &vka::INSTITUTES_ITMO,
        &vka::INSTITUTES_SPBSTU,
        &vka::INSTITUTES_ETU
    };
    const int institutes_size = sizeof(institutes_children) / sizeof(institutes_children[0]);
}

const vka::MenuItem vka::SEE_INSTITUTES = {
    "1 - Посмотреть университеты Санкт-Петербурга", vka::show_menu, &vka::MAIN, institutes_children, institutes_size
};

const vka::MenuItem vka::EXIT = {
    "0 - Я уже студент", vka::exit, &vka::MAIN
};

namespace {
    const vka::MenuItem* const main_children[] = {
        &vka::EXIT,
        &vka::SEE_INSTITUTES
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const vka::MenuItem vka::MAIN = {
    nullptr, vka::show_menu, nullptr, main_children, main_size
};