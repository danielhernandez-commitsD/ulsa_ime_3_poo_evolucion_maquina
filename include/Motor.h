#ifndef MOTOR_H
#define MOTOR_H

#include <iostream>
#include <string>
#include <stdexcept>

class Motor {
private:
    std::string tipo;
    double potenciaHP;

public:
    Motor(std::string t, double p) : tipo(t), potenciaHP(p) {
        if (potenciaHP <= 0.0) {
            throw std::out_of_range("Contrato del motor violado: La potencia en HP debe ser mayor a 0.");
        }
    }

    void encender() const {
        std::cout << "Motor " << tipo << " operando a " << potenciaHP << " HP." << std::endl;
    }

    std::string getTipo() const { return tipo; }
    double getPotencia() const { return potenciaHP; }
};

#endif