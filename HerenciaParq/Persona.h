#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using std::string;

class Persona{
    protected:
        string nombreCompleto;
        string documento;
        string username;
    private:
        
    public:
        void mostrar();
        float pagarParqueadero();
        void setNombreCompleto(string nombreCompleto);
        void setDocumento(string documento);
        void setUsername(string username);
        string getNombreCompleto();
        string getDocumento();
        string getUsername;
};

#endif