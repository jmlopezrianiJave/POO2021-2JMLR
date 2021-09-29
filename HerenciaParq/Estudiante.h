#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"

class Estudiante : public Persona{
private:
    float promedioAcumulado;
    string carrera;
public:
    void mostrar();
    void estaEnPrueba();
    float pagarParqueadero();
    void setPromedioAcumulado(float promedioAcumulado);
    void setCarrera(string carrera);
    float getPromedioAcumulado();
    string getCarrera();
};


#endif