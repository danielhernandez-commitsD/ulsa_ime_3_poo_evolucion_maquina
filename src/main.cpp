#include <iostream>
#include "Maquina.h"
#include "Torno.h"

int main() {
    try {
    Maquina miMaquina("Torno 1", 10, 2.5);

    std::cout << "Maquina creada: " << miMaquina.getNombre() << std::endl;
    miMaquina.procesar();
     } catch (const std::exception& e) {
        std::cout << "Error capturado: " << e.what() << std::endl;
    }
    try {
        Maquina* miTorno = new Torno("Torno CNC", 50, 1.5, 2500);
        miTorno->procesar(); 
        
        delete miTorno;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}