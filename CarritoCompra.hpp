#include <iostream>
#include <string>
#include "Articulo.hpp" // Clase Articulo

// NO MODIFICAR ESTA CONSTANTE
const int MAX = 11; //  constante para usar 10 articulos. Se usa 11 para no utilizar el renglo 0


class CarritoCompra{
  public:
    CarritoCompra(); // constructor por omisión
    ~CarritoCompra(); // destructor

    //getters
    std::string getNombreTienda();
    std::string getFechaCompra();
    int getTotalArticulos();
    float getTotalCompra();
    Articulo& getArticulo(int); //Regresa el Articulo i del Carrito de Compras

    //setters
    void setNombreTienda(std::string);
    void setFechaCompra(std::string);
    void setTotalArticulos(int);
    void setTotalCompra(float);

    // metodos para simular el proceso de compra
    void seleccionaArticulos(); // selecciona los artículos que compra
    void imprimeCarrito(); // muestra en consola los artículos comprados y los totales de la compra

  private:
    // NO MODIFIQUES ESTOS ATRIBUTOS
    std::string nombreTienda;
    std::string fechaCompra; 
    int totalArticulos; //cantidad total de los articulos de la compra
    float totalCompra; // total en pesos de la compra
    Articulo articulos[MAX]; // arreglo de articulos para el carrito. Son 10 artículos de la clase Articulo
};