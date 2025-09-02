#include <iostream>
#include <string_view>

#ifndef HANDLE_MENU
#define HANDLE_MENU

const std::string_view mainMenu {
    "STORYLINES BY\n"
    "\"Crea o recrea historias con personajes, "
    "eventos y aleatoriedad\"\n"
    "\n"
    "MENÚ (elige una opción):\n"
    "[1] Generar historia\n"
    "[2] Personajes\n"
    "[3] Eventos\n"
    "[0] Salir\n"
};

const std::string_view storylinesMenu {
    "STORYLINES BY >> GENERAR HISTORIA\n"
    "[1] Recrear historia interactiva\n"
    "[2] Recrear historia aleatoria\n"
    "[0] Volver\n"
};

const std::string_view charactersMenu {
    "STORYLINES BY >> PERSONAJES\n"
    "[1] Crear personaje\n"
    "[2] Listar personajes\n"
    "[3] Cargar personajes\n"
    "[4] Guardar personajes\n"
    "[0] Volver\n"
};

const std::string_view eventsMenu {
    "STORYLINES BY >> EVENTOS\n"
    "[1] Crear evento\n"
    "[2] Listar eventos\n"
    "[3] Ordenar evento\n"
    "[4] Guardar eventos\n"
    "[0] Volver\n"
};

int menuType {};

void print(std::string_view menu);
int chooseOption();
int activate(std::string_view menu);

#endif