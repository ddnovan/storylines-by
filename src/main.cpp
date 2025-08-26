#include <iostream>

void printMainMenu() {

    std::cout << "STORYLINES BY" << '\n'; 
    std::cout << "\"Crea o recrea historias con personajes, "
                 "eventos y aleatoriedad\"" << '\n';
    std::cout << '\n';
    std::cout << "MENÚ (elige una opción):" << '\n';
    std::cout << "[1] Crear historia" << '\n';
    std::cout << "[2] Personajes" << '\n';
    std::cout << "[3] Eventos" << '\n';
    std::cout << "[0] Salir" << '\n'; 
}

int main() {

    int option {};

    while (true) {

        printMainMenu();
        std::cout << "Opción a escoger -> ";
        std::cin >> option;

        switch (option) {
            case 0:
                std::cout << "Salida de STORYLINES BY" << '\n';
                return 0;
            case 1:
                std::cout << "Opción 1 escogida" << '\n';
                break;
            case 2:
                std::cout << "Opción 2 escogida" << '\n';
                break;
            case 3:
                std::cout << "Opción 3 escogida" << '\n';
                break;
            default:
                std::cout << "Opción incorrecta" << '\n';
                break;
        }        
    }

    return 0;
}