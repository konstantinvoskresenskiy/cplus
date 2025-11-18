#pragma once

#include "menu.h"


namespace MenuFunctions{

    const KVoskresenskiy::MenuItem *show_element_menu(const KVoskresenskiy::MenuItem *current);

    const KVoskresenskiy::MenuItem *show_element_with_link_menu(const KVoskresenskiy::MenuItem *current);

    const KVoskresenskiy::MenuItem *show_global_menu(const KVoskresenskiy::MenuItem *current);
}