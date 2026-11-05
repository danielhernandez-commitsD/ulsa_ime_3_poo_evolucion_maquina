#ifndef FRESADORA_H
#define FRESADORA_H

#include "Maquina.h"

class Fresadora : public Maquina {
private:
    double velocidadCorte; // Parámetro específico de la fresadora

public:
    Fresadora(std::string n, int p, double t, double vc) 
        : Maquina(n, p, t), velocidadCorte(vc) {}

    void procesar() override {
        if (velocidadCorte <= 0.0 || velocidadCorte > 500.0) {
            throw std::out_of_range("Contrato violado: La velocidad de corte de la fresadora esta fuera del rango seguro (0.1 - 500.0).");
        }
        std::cout << "La Fresadora " << nombre << " esta fresando a una velocidad de corte de " << velocidadCorte << " m/min." << std::endl;
    }

    ~Fresadora() override {
        std::cout << "Destruyendo Fresadora: " << nombre << std::endl;
    }
};

#endif