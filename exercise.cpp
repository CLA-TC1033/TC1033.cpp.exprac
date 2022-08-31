#include <iostream>

#include "CarritoCompra.hpp"

int main()
{
  CarritoCompra carrito1, carrito2;

  // Construye un objeto carrito1 a partir de la clase CarritoCompra
  carrito1.seleccionaArticulos();
  carrito1.imprimeCarrito();
  // Construye un objeto carrito2 a partir de la clase CarritoCompra
  carrito2.seleccionaArticulos();
  carrito2.imprimeCarrito();

  return 0;
}