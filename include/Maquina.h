#ifndef MAQUINA_H
#define MAQUINA_H

#include <string>
#include <iostream>

class Maquina {
public:
    std::string nombre;
    int piezasProcesadas;
    double tiempoCiclo;

    Maquina(std::string n, int p, double t) {
        nombre = n;
        piezasProcesadas = p;
        tiempoCiclo = t;
    }

    void procesar() {
        std::cout << "La maquina " << nombre << " esta procesando piezas." << std::endl;
    }
};

#endif