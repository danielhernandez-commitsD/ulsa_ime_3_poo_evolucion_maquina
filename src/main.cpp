#include <iostream>
#include "Maquina.h"

int main() {
    try {
    Maquina miMaquina("Torno 1", -5, 2.5);

    std::cout << "Maquina creada: " << miMaquina.nombre << std::endl;
    miMaquina.procesar();
     } catch (const std::exception& e) {
        std::cout << "Error capturado: " << e.what() << std::endl;
    }

    return 0;
}