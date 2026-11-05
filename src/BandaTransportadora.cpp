#include "BandaTransportadora.h"
#include <iostream>
#include <stdexcept>

BandaTransportadora::BandaTransportadora(std::string n, int p, double t, double vb) 
    : Maquina(n, p, t), velocidadBanda(vb) {}

void BandaTransportadora::procesar() {
    if (velocidadBanda <= 0.0 || velocidadBanda > 10.0) {
        throw std::out_of_range("Contrato violado: La velocidad de la banda transportadora esta fuera del rango seguro (0.1 - 10.0 m/s).");
    }
    std::cout << "La Banda Transportadora " << nombre << " esta trasladando materiales a una velocidad de " << velocidadBanda << " m/s." << std::endl;
}

BandaTransportadora::~BandaTransportadora() {
    std::cout << "Destruyendo Banda Transportadora: " << nombre << std::endl;
}