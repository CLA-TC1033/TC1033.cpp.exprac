// Clase Articulo
// Este archivo implementa la clase Articulo
// Algunas partes del código faltan y deberás complementarlas
// Sigue las instrucciones. No modifiques aquello que se te indica y completa lo faltante
#include "Articulo.hpp"
#include <string>

Articulo::Articulo(){
  id = 0;
  precio = 0.0;
  cantidad = 0.0;
}

// no modifiques
Articulo::Articulo(int _id, float _precio, float _cantidad){
  id = _id;
  precio = _precio;
  cantidad = _cantidad;
}

// no modifiques
Articulo::~Articulo(){}

//////////////////////////////////////////
// COMPLETA los métodos getters y setters según los encabezados de la clase
// coloca aqui los métodos 
/////////////////////////////////////////


// no modifiques
std::string Articulo::toString()
{
  std::string scantidad{std::to_string(this->getCantidad())};
  std::string sid{std::to_string(this->getId())};
  std::string sprecio{std::to_string(this->getPrecio())};

  return "|"+scantidad+"-"+sid+"-"+sprecio+"|";
}

void Articulo::imprimirArticulo(){
// COMPLETA el método imprimirArticulo
// Para la impresión de los datos en consola, usa el formato: |cantidad-id-precio|. No agregues ningún espacio en blanco.
// Es importante seguir el orden para mostrar los atributos, asi como el formato señalado
// Sólo se debe imprimir un artículo cuyo valor en su atributo cantidad sea mayor a cero

}
