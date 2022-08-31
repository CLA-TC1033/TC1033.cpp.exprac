#pragma once

#include <iostream>
#include <string>

class Articulo{
public:
  // constructores y destructor
  Articulo();
  Articulo(int, float, float);
  ~Articulo();

  // getters
  int getId();
  float getPrecio();
  float getCantidad();

  // setters
  void setId(int);
  void setPrecio(float);
  void setCantidad(float);

  // metodo para imprimir los atributos del articulo
  std::string toString();
  void imprimirArticulo();

private:
  // NO MODIFIQUES NADA EN ESTA PARTE
  // no modifiques los atributos privados
  int id;
  float precio, cantidad;
};