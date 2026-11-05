#include <iostream>
#include "Maquina.h"

int main() {
    Maquina miMaquina("Torno 1", -5, 2.5);

    std::cout << "Maquina creada: " << miMaquina.nombre << std::endl;
    miMaquina.procesar();

    return 0;
}