#ifndef TORNO_H
#define TORNO_H

#include "Maquina.h"

class Torno : public Maquina {
private:
    int rpm;

public:
    Torno(std::string n, int p, double t, int r) : Maquina(n, p, t), rpm(r) {}

    void procesar() override {
        if (rpm <= 0 || rpm > 4000) {
        throw std::out_of_range("Contrato violado: Las RPM del torno estan fuera del rango seguro (1 - 4000).");
    }
        std::cout << "El Torno " << nombre << " esta torneando a " << rpm << " RPM." << std::endl;
    }
    
    ~Torno() override {
    std::cout << "Destruyendo Torno: " << nombre << std::endl;
    }
};

#endif