#include <iostream>
#include "Maquina.h"
#include "Torno.h"
#include "Fresadora.h"
#include "ControlDeLinea.h"

int main() {
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

    try {
    Maquina* tornoInvalido = new Torno("Torno Extremo", 20, 1.0, 5000);
    tornoInvalido->procesar();
    delete tornoInvalido;
    } catch (const std::exception& e) {
    std::cout << "Error de contrato capturado: " << e.what() << std::endl;
    }

    try {
    ControlDeLinea linea;
    linea.agregarMaquina(new Torno("Torno CNC 1", 50, 1.5, 2500));
    linea.agregarMaquina(new Fresadora("Fresadora Vertical 1", 40, 2.0, 120.5));

    std::cout << "--- Iniciando operacion de la linea de produccion ---" << std::endl;
    linea.ejecutarLinea();
    } catch (const std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}