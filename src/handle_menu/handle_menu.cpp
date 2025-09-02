#include "handle_menu.h"

void print(std::string_view menu) {

    std::cout << menu << '\n';
}

int chooseOption() {
    
    int option {};

    std::cout << "Opción a escoger -> ";
    std::cin >> option;

    return option;
}

int activate(std::string_view menu) {
    
    print(menu);
    return chooseOption();
}

