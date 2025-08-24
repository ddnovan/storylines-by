#include <iostream>

int main() {

    int option{};

    do {
        
        std::cout << "STORYLINES BY" << '\n';
        std::cout << '\n'; 
        std::cout << "Crea o recrea historias con personajes, "
                     "eventos y aleatoriedad." << '\n';
        std::cout << '\n';
        std::cout << "MENÚ (elige una opción):" << '\n';
        std::cout << "[1] Crear historia" << '\n';
        std::cout << "[2] Personajes" << '\n';
        std::cout << "[3] Eventos" << '\n';
        std::cout << "[0] Salir" << '\n'; 

        std::cout << "Opción a escoger: ";
        std::cin >> option;
        
    } while (option != 0);

    return 0;
}