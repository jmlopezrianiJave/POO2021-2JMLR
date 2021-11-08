//
// Created by lufe0 on 3/11/2021.
//

#include "gtest/gtest.h"
#include "../src/Model/Admin.h"

TEST(AdminTest, recaudarAdmin){
    Admin administrador = Admin();
    EXPECT_EQ(327000, administrador.recaudarAdmin());
}

TEST(AdminTest, mostrarBeneficios){
    Admin administrador = Admin();
    int id = 1;
    string val = "1. Derecho a usar el salón social de manera gratuita.\n2. Descuento del 1 para la compra de productos en la tienda del edificio.";
    EXPECT_EQ(val, administrador.mostrarBeneficios(id));
}

TEST(AdminTest, mostrarPropParqueadero){
    Admin administrador = Admin();
    int id = 1;
    string val = "nombrejuanajuanitojuanpa";
    EXPECT_EQ(val, administrador.mostrarPropParqueadero());
}

TEST(AdminTest, cambiarTipoPropietario){
    Admin administrador = Admin();
    int id = 1;

    EXPECT_EQ("carlos",administrador.cambiarTipoPropietario(1,1,"carlos"));
}

TEST(AdminTest, recaudoPropietario){
    Admin administrador = Admin();
    int id = 1;

    EXPECT_EQ(52000,administrador.recaudoPropietario(1));
}

