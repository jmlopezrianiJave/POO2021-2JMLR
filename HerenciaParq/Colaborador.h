#ifndef COLABORADOR_H
#define COLABORADOR_H

#include "Persona.h"

class Colaborador : public Persona{
private:
    string cargo;
    float salarioActual;
public:
    void mostrar();
    void incrementarSalario(float porcentaje);
    float pagarParqueadero();
};


#endif