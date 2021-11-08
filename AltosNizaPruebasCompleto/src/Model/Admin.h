#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <map>
#include "Propietario.h"
#include "Reventa.h"
#include "Fundador.h"

using std::cin;
using std::cout;
using std::getline;
using std::string;
using std::map;

class Admin{
    private:
        map<int, Propietario*> propietarios;
        int tarifaAdmin;
        void crearDummyData();
        bool verExistePropietario(int id);
    public:
        Admin();
        float recaudarAdmin();
        string mostrarBeneficios(int id);
        string mostrarPropParqueadero();
        string cambiarTipoPropietario(int id,  int idNuevoProp, string nuevoProp);
        float recaudoPropietario(int id);
};

#endif