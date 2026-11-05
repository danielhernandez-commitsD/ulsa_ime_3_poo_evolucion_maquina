#ifndef BANDA_TRANSPORTADORA_H
#define BANDA_TRANSPORTADORA_H

#include "Maquina.h"

class BandaTransportadora : public Maquina {
private:
    double velocidadBanda; // Velocidad en m/s

public:
    BandaTransportadora(std::string n, int p, double t, double vb);

    void procesar() override;

    ~BandaTransportadora() override;
};

#endif