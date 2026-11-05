#ifndef CONTROL_DE_LINEA_H
#define CONTROL_DE_LINEA_H

#include <vector>
#include "Maquina.h"

class ControlDeLinea {
private:
    std::vector<Maquina*> maquinas;

public:
    ~ControlDeLinea() {
        for (auto m : maquinas) {
            delete m;
        }
    }

    void agregarMaquina(Maquina* m) {
        maquinas.push_back(m);
    }

    void ejecutarLinea() {
        for (const auto& m : maquinas) {
            m->procesar(); 
        }
    }
};

#endif