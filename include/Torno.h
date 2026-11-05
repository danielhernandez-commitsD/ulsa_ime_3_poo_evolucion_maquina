#ifndef TORNO_H
#define TORNO_H

#include "Maquina.h"

class Torno : public Maquina {
private:
    int rpm;

public:
    Torno(std::string n, int p, double t, int r) : Maquina(n, p, t), rpm(r) {}

    void procesar() override {
        std::cout << "El Torno " << nombre << " esta torneando a " << rpm << " RPM." << std::endl;
    }

    ~Torno() override {
    std::cout << "Destruyendo Torno: " << nombre << std::endl;
}
};

#endif