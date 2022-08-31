#include "CarritoCompra.hpp"
#include "Articulo.hpp"


CarritoCompra::CarritoCompra() {
  // NO MODIFICAR ESTOS VALORES
  nombreTienda = "Super Tienda";
  fechaCompra = "16/11/2022";
  totalArticulos = 0;
  totalCompra = 0;
    
  // COMPLETA lo siguiente:
  //
  // INICIALIZA LOS 10 articulos del carrito siguiendo las siguientes especificaciones.
   // NO utilices el renglón 0 del arreglo articulos.
   // ASIGNA al id del artículo un valor entero consecutivo a partir de 1.
   // NO HAY id cero. De esta forma, coincide el índice del arreglo con el id del artículo.
   // ASIGNA el precio de cada artículo según el valor de su id de la siguiente forma:
        // para artículos con ID par, el precio sera id * 10
        // para artículos con ID impar, el precio sera id * 20
   // ASIGNA cero al atributo cantidad de todos los artículos

    for (auto i=1; i< MAX; i++) {
      articulos[i]=Articulo();
      articulos[i].setId(i);
      if (i % 2 == 0) 
        articulos[i].setPrecio(i * 10);
      else
        articulos[i].setPrecio(i * 20);
    }
  }


CarritoCompra::~CarritoCompra(){}

// COMPLETA en esta sección los métodos getters faltantes

std::string CarritoCompra::getNombreTienda(){
  return nombreTienda;
}

std::string CarritoCompra::getFechaCompra(){
  return fechaCompra;
}

int CarritoCompra::getTotalArticulos(){
  return this->totalArticulos;
}

float CarritoCompra::getTotalCompra() {
  return this->totalCompra;
}

// COMPLETA en esta sección los métodos setters faltantes

void CarritoCompra::setTotalArticulos(int _totalArticulos){
  totalArticulos = _totalArticulos;
}

void CarritoCompra::setTotalCompra(float _totalCompra){
  totalCompra = _totalCompra;
}

void CarritoCompra::setFechaCompra(std::string _fechaCompra)
{
  this->fechaCompra=_fechaCompra;
}

void CarritoCompra::setNombreTienda(std::string _nombreTienda)
{
  this->nombreTienda=_nombreTienda;
}

Articulo& CarritoCompra::getArticulo(int i) {
  return articulos[i];
}


void CarritoCompra::seleccionaArticulos(){
  // En este método simularás el proceso de asignar artículos a tu carrito. Es un proceso iterativo.
  // El proceso consiste en solicitar al usuario la cantidad a comprar de cada artículo y su id.
  // El proceso termina cuando el usuario introduce los valores 0 0, es decir, cantidad 0 y id 0.
  // Al mismo tiempo de pedir cantidades y ids, este método debe acumular el total de artículos que se colocan en el carrito
  // así como el monto total de la compra. 
  // Sólo se podrán agregar al carrito artículos cuyos id estén en el rango 1 y MAX
    
  std::cout << "Cantidad ID-Articulo" << std::endl; // NO MODIFIQUES este letrero, se usará para mostrar elorden en que se solicitan datos al usuario
  // COMPLETA LO SIGUIENTE
  // El proceso debe repetirse mientras el usuario no teclee 0 en cantidad
      // Sin usar más letreros, pide al usuario, en un mismo renglón, la cantidad de artículo y id del artículo, en ese orden
      // Si la cantidad es mayor a cero y el id está en el rango 1 a MAX, por ejemplo 5 3, significa que se compran 5 artículos con id 3
        // Calcula el monto de la compra, multiplicando el precio del articulo por la cantidad
        // Acumula la compra calculada con la compra total del carrito
        // Acumula la cantidad del artículo con la cantidad total de artículos del carrito
  int id;
  float cantidad;
  float st{0};
  
  while (true) {
    std::cin >> cantidad >> id;

    if (cantidad == 0)
      break;

    if (cantidad < 0) {
      std::cout << "La cantidad debe ser positiva ..." << "\n";
    }
    else {
        if (id < 1 || id > 10) {
          std::cout << "El Id debe estar entre 1 y 10" << "\n";
        }
        else {
           getArticulo(id).setCantidad(cantidad);

            st = cantidad * getArticulo(id).getPrecio();
            totalArticulos += cantidad;
            totalCompra += st;
        }
    }
  }
}

void CarritoCompra::imprimeCarrito(){
  std::cout << nombreTienda << std::endl;
  std::cout << "Fecha: " << fechaCompra << std::endl;
  std::cout << "Articulos: " << std::endl;
    // COMPLETA esta parte
    // UTILIZA el método imprimirArticulo de la clase Articulo para imprimir todos los artículos del carrito
  for (auto i=1;i<MAX; i++)
  {
    getArticulo(i).imprimirArticulo();
  }

  std::cout << "Total articulos: " << totalArticulos << " Total compra: $ " << totalCompra << std::endl;
}