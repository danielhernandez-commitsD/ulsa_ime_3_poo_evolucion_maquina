#ifndef MAQUINA_H
#define MAQUINA_H

#include <string>
#include <iostream>
#include <stdexcept>

class Maquina {
protected:
    std::string nombre;
    int piezasProcesadas;
    double tiempoCiclo;

public:
    explicit Maquina(std::string n, int p, double t) {
        if (n.empty()) {
            throw std::invalid_argument("El nombre de la maquina no puede estar vacio.");
        }
        if (p < 0 || t < 0) {
            throw std::out_of_range("Las piezas y el tiempo de ciclo no pueden ser negativos.");
        }

        nombre = n;
        piezasProcesadas = p;
        tiempoCiclo = t;
    }

    virtual ~Maquina() {}
    
    virtual void procesar() = 0;
    
    std::string getNombre() const { return nombre; }
};

#endif