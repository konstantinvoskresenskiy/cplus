#include "menu_elements.h"
#include "function_elements.h"

namespace main_children {
    const KVoskresenskiy::MenuItem *const children[] = {
            &KVoskresenskiy::SUBJECT_CHOICE_LEVEL1
    };
}

namespace main_education_children {
    const KVoskresenskiy::MenuItem *const children[] = {
            &KVoskresenskiy::ALGEBRA_LEVEL2,
            &KVoskresenskiy::MATHAN_LEVEL2
    };
}

namespace mathan_children {
    const KVoskresenskiy::MenuItem *const children[] = {
            &KVoskresenskiy::MATHAN_LEVEL3_1,
            &KVoskresenskiy::MATHAN_LEVEL3_2
    };
}

namespace algebra_children {
    const KVoskresenskiy::MenuItem *const children[] = {
            &KVoskresenskiy::ALGEBRA_LEVEL3_1,
            &KVoskresenskiy::ALGEBRA_LEVEL3_2,
            &KVoskresenskiy::ALGEBRA_LEVEL3_3,
            &KVoskresenskiy::ALGEBRA_LEVEL3_4
    };
}

const KVoskresenskiy::MenuItem KVoskresenskiy::MAIN_LEVEL0{
        "Главное Меню", "", MenuFunctions::show_element_menu, nullptr, main_children::children, 1
};

const KVoskresenskiy::MenuItem KVoskresenskiy::SUBJECT_CHOICE_LEVEL1{
        "Меню программ обучения", "", MenuFunctions::show_element_menu, &MAIN_LEVEL0, main_education_children::children,
        2
};

const KVoskresenskiy::MenuItem KVoskresenskiy::ALGEBRA_LEVEL2{
        "Меню изучения Алгебры", "", MenuFunctions::show_element_menu, &SUBJECT_CHOICE_LEVEL1,
        algebra_children::children, 4
};

const KVoskresenskiy::MenuItem KVoskresenskiy::MATHAN_LEVEL2{
        "Меню изучения МатАнализа", "", MenuFunctions::show_element_menu, &SUBJECT_CHOICE_LEVEL1,
        mathan_children::children, 2
};


const KVoskresenskiy::MenuItem KVoskresenskiy::ALGEBRA_LEVEL3_1{
        "Хочу научиться складывать!", "https://resh.edu.ru/subject/lesson/6865/conspect/236927/",
        MenuFunctions::show_element_with_link_menu, &ALGEBRA_LEVEL2, nullptr, 0
};
const KVoskresenskiy::MenuItem KVoskresenskiy::ALGEBRA_LEVEL3_2{
        "Хочу научиться вычитать!", "https://skysmart.ru/articles/mathematic/vychitanie-stolbikom",
        MenuFunctions::show_element_with_link_menu, &ALGEBRA_LEVEL2, nullptr, 0
};
const KVoskresenskiy::MenuItem KVoskresenskiy::ALGEBRA_LEVEL3_3{
        "Хочу научиться делить!", "http://spacemath.xyz/delenie/",
        MenuFunctions::show_element_with_link_menu, &ALGEBRA_LEVEL2, nullptr, 0
};
const KVoskresenskiy::MenuItem KVoskresenskiy::ALGEBRA_LEVEL3_4{
        "Хочу научиться умножать!", "https://skysmart.ru/articles/mathematic/umnozhenie-v-stolbik",
        MenuFunctions::show_element_with_link_menu, &ALGEBRA_LEVEL2, nullptr, 0
};


const KVoskresenskiy::MenuItem KVoskresenskiy::MATHAN_LEVEL3_1{
        "Хочу изучить дифференциальное исчисление!",
        "https://hti.urfu.ru/fileadmin/user_upload/site_15078/dokumenty/zaochniki/2_matem_analiz_funkcii_odnoi_peremennoi.pdf",
        MenuFunctions::show_element_with_link_menu, &MATHAN_LEVEL2, nullptr, 0
};
const KVoskresenskiy::MenuItem KVoskresenskiy::MATHAN_LEVEL3_2{
        "Хочу изучить интегральное исчисление!", "https://www.booksite.ru/fulltext/1/001/008/055/368.htm",
        MenuFunctions::show_element_with_link_menu, &MATHAN_LEVEL2, nullptr, 0
};