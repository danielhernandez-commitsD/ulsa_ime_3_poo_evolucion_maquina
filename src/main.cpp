#include <iostream>
#include "Maquina.h"
#include "Torno.h"
#include "ControlDeLinea.h"

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

    try {
        ControlDeLinea linea;
        
        linea.agregarMaquina(new Torno("Torno CNC 1", 50, 1.5, 2500));
        linea.agregarMaquina(new Torno("Torno Revolver", 30, 2.0, 1800));

        std::cout << "--- Iniciando operacion de la linea de produccion ---" << std::endl;
        linea.ejecutarLinea();

    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }


    return 0;
}