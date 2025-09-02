#include "handle_menu/handle_menu.h"

#include <iostream>

int main() {

    while (true) {

        int chosenOption {activate(mainMenu)};
        int chosenSuboption {};

        switch (chosenOption) {
            case 0:
                std::cout << "Salida de STORYLINES BY" << '\n';
                return 0;
            case 1:
                chosenSuboption = activate(storylinesMenu);
                menuType = chosenOption;
                break;
            case 2:
                chosenSuboption = activate(charactersMenu);
                menuType = chosenOption;
                break;
            case 3:
                chosenSuboption = activate(eventsMenu);
                menuType = chosenOption;
                break;
            default:
                std::cout << "Opción incorrecta" << '\n';
                break;
        }

        switch (menuType) {
            case 0:
                break;
            case 1:                
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                std::cout << "Opción incorrecta" << '\n';
                break;
        }
    }

    return 0;
}