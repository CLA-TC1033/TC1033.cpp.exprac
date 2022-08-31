// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"

#include "../Articulo.hpp"
#include "../CarritoCompra.hpp"

// =====================
// tests for exercise 1
// ---------------------

TEST_CASE("Ex1", "[Articulo-Getters]")
{
    Articulo a1;
    Articulo a2(1,3.50,10);

    REQUIRE(a1.getId()==0);
    REQUIRE(a1.getCantidad()==0.0);
    REQUIRE(a1.getPrecio()==0.0);

    REQUIRE(a2.getId()==1);
    REQUIRE(a2.getCantidad()==10.0);
    REQUIRE(a2.getPrecio()==3.50);
}

TEST_CASE("Ex2", "[Articulo-Setters]")
{
    Articulo a1(1,3.50,10);

    a1.setId(1);
    a1.setPrecio(3.50);
    a1.setCantidad(10);

    REQUIRE(a1.getId()==1);
    REQUIRE(a1.getCantidad()==10.0);
    REQUIRE(a1.getPrecio()==3.50);
}

TEST_CASE("Ex3", "[Articulo-Imprimir]")
{
    Articulo a1(1,3.50,10);

    a1.imprimirArticulo();

    REQUIRE(a1.toString()=="|10.000000-1-3.500000|");
}

TEST_CASE("Ex4", "[CarritoCompras-Constructor+Setters+Getters]")
{
    CarritoCompra cc;

    for (auto i=1; i<MAX; i++) {
        REQUIRE(cc.getArticulo(i).getId()==i);
        if (i % 2 == 0)
            REQUIRE(cc.getArticulo(i).getPrecio()==i*10);
        else
            REQUIRE(cc.getArticulo(i).getPrecio()==i*20);

        std::cout << cc.getArticulo(i).getId() <<"," << cc.getArticulo(i).getPrecio() 
                  << "," << cc.getArticulo(i).getCantidad() << "\n";     
    }
}