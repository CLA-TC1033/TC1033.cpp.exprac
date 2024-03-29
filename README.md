# Examen Práctico - Pensamiento Computacional Orientado a Objetos

## Descripción del Problema

Completa la clase ```Artículo``` de acuerdo con los comentarios que se encuentran en el archivo ```Articulo.hpp```.Completa la clase ```CarritoCompra``` de acuerdo con los comentarios en el archivo ```CarritoCompra.hpp```. Completa el programa principal de acuerdo con los comentarios en el archivo ```exercise.cpp```.

## Ejemplo de ejecución

```
Cantidad ID-Articulo
1 1
2 2
0 0
Super Tienda
Fecha: 16/11/2022
Articulos: 
|1.000000-1-20.000000|
|2.000000-2-20.000000|
Total articulos: 3 Total compra: $ 60
Cantidad ID-Articulo
0 0
Super Tienda
Fecha: 16/11/2022
Articulos: 
Total articulos: 0 Total compra: $ 0
```

## Diagrama de Clases

Construye el Diagrama de Clases de la solución aquí:

```mermaid
classDiagram
      class Clase
      Clase: -x
      Clase: -y
      Clase: +op1()
      Clase: +op2()
```

## Objetivo

- Busca que el código pase correctamente todas las pruebas
   * Solamente cambia los archivos permitidos para lograr este objetivo (abajo se indican las reglas específicas)
   
- Las GitHub Actions deberán presentar una palomita en verde si se han satisfecho todas las pruebas, y una cruz roja cuando alguna (o todas) las pruebas han fallado.
   * **Recomendación:** Puedes dar clic en la cruz roja para verificar cual de las pruebas ha fallado (o si el código no ha compilado correctamente).
   * **Recomendación:** En caso de que el Autograding no muestre pruebas o no funcione, contacta a tu profesor mediante un issue.

## Instrucciones

- Modifica y/o extiende la programación para ofrecer una solución a este examen.

Explicación de los otros archivos:

- Archivo `test/tests.cpp` tiene las pruebas de esta actividad (NO LO CAMBIES!)
- Archivo `test/catch.hpp` tiene la biblioteca de pruebas  CATCH2 (NO LA CAMBIES!)
- Archivo `makefile` tienes los comandos para ejecutar la actividad (NO LO CAMBIES!)
- Archivo  `./build/appTests` se generará después de compilar (para **pruebas locales**, solo ejecútalo)

## Comandos para pruebas locales, ejecución y depuración

- Comando para construir y ejecutar pruebas: `make` o `make test`
    * Si el ejecutable ya está construido, sólo teclea : `./build/appTests`

- Comando para construir y ejecutar la aplicación: `make run` 
    * Si el ejecutable ya está construido, sólo teclea : `./build/exercise`

- Comando para depurar: `make debug`
    * Para conocer los comandos de depuración consulta:
     https://u.osu.edu/cstutorials/2018/09/28/how-to-debug-c-program-using-gdb-in-6-simple-steps/
     
- Comando para depurar con `vsCode` : `make debugvs` 
    * Utilizar el depurador de la IDE.     

- Comando para depurar con `vsCode` y pruebas: `make debugtest` 
    * Utilizar el depurador de la IDE.     

## Notas

- El código será evaluado solamente si compila.
   * La razón de esto es, si no compila no es posible generar el ejecutable y realizar las pruebas.

- Algunos casos de prueba podrían recibir calificación individual, otros podrían recibir calificación y si pasan todos juntos (o todas las pruebas en conjunto).

- La calificación final se otorgará de manera automática en cada *commit*, y se evaluará solamente hasta la fecha limite de la actividad.

Para dudas adicionales, consulta a tu profesor.

## License

MIT License 2020
