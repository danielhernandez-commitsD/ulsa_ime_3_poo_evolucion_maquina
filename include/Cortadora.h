#ifndef CORTADORA_H
#define CORTADORA_H

#include "Maquina.h"

class Cortadora : public Maquina {
private:
    double longitudCorte; // Parámetro específico de la cortadora (en milímetros o metros)

public:
    Cortadora(std::string n, int p, double t, double lc) 
        : Maquina(n, p, t), longitudCorte(lc) {}

    void procesar() override {
        if (longitudCorte <= 0.0 || longitudCorte > 2000.0) {
            throw std::out_of_range("Contrato violado: La longitud de corte esta fuera del rango seguro (0.1 - 2000.0 mm).");
        }
        std::cout << "La Cortadora " << nombre << " esta cortando un material con una longitud de " << longitudCorte << " mm." << std::endl;
    }

    ~Cortadora() override {
        std::cout << "Destruyendo Cortadora: " << nombre << std::endl;
    }
};

#endif