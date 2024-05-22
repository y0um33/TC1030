# ifndef TIENDA_H
#define TIENDA_H

#include <sstream>
#include <string>
#include <iostream>

#include "producto.h"

using namespace std;

const int MAX = 1000; //constante de tamño de arreglos

class Tienda {
    private:
        Producto * pro[MAX]; //se define como apuntador para usar polimorfismo, puntero tipo Producto
        int compra;
    public:
        Tienda(): compra(0) {}; //constructor por default

        void crea_productos();
        void muestra_producto();
        void muestra_producto(string categoria);
        void agrega_fruta(string nombre, float precio, int des);
        void agrega_juego(string nombre, float precio, int des, int rare);
        void agrega_vegetal(string nombre, float precio, int des);
};

/*
crea_productos genera objetos en Tienda[].

genera objetos de tipo Fruta, Juego y Vegetal 
y los guarda en la variable de instancia en pro[] (arreglo de productos)
para poder hacer pruebas.

No usar función si se va a usar el programa en producción, ya que los datos son falsos.

@param
@return
*/

        void Tienda::crea_productos() {
            //new crea el objeto en tiempo de ejecución para usar polimorfismo
            pro[compra] = new Fruta(compra, "Manzana", 12.6, 2);
            compra++;
            pro[compra] = new Fruta(compra, "Platano", 24.8, 3);
            compra++;
            pro[compra] = new Fruta(compra, "Guayaba", 21.5, 1);
            compra++;
            pro[compra] = new Juego(compra, "Fortnite", 590.65, 15, 1);
            compra++;
            pro[compra] = new Juego(compra, "Playerunknown's Battleground", 504.23, 40, 2);
            compra++;
            pro[compra] = new Juego(compra, "Lethal Company", 123.99, 5, 0);
            compra++;
            pro[compra] = new Vegetal(compra, "Pepino", 9.99, 1);
            compra++;
            pro[compra] = new Vegetal(compra, "Lechuga", 15.3, 2);
            compra++;
            pro[compra] = new Vegetal(compra, "Cebolla", 7.88, 1);
            compra++;
        }

/*
muestra_productos imprime los productos

utiliza el arreglo pro[] y el número de compras.
Recorre todo el arreglo imprimiento cada uno de los objetos con 
su método to_string().

@param
@return
*/

void Tienda::muestra_producto() {
    for (int i = 0; i < compra; i++) //ciclo que recorre el arreglo
        cout << pro[i] -> to_string(); //imprime cada objeto
}

/*
muestra_producto imprime productos que coinciden con categoria
*/

void Tienda::muestra_producto(string categoria){
    //ciclo que recorre el arreglo e imprime cada objeto.
    for (int i = 0; i < compra; i++){
        if (pro[i] -> get_categoria() == categoria)
        {
            cout << pro[i] -> to_string();
        }
        
    }
}
/*
agrega_fruta crea un objeto Fruta y agrega a arreglo de productos.


*/

void Tienda::agrega_fruta(string nombre, float precio, int des) {
    //new crea el objeto en tiempo de ejecución para usar polimorfismo
    pro[compra] = new Fruta(compra, nombre, precio, des);
}

/*
agrega_juego crea un objeto Juego y agrega a arreglo de productos.


*/

void Tienda::agrega_juego(string nombre, float precio, int des, int rare ) {
    //new crea el objeto en tiempo de ejecución para usar polimorfismo
    pro[compra] = new Juego(compra, nombre, precio, des, rare);
}

/*
agrega_vegetal crea un objeto Vegetal y agrega a arreglo de productos.


*/

void Tienda::agrega_vegetal(string nombre, float precio, int des) {
    //new crea el objeto en tiempo de ejecución para usar polimorfismo
    pro[compra] = new Vegetal(compra, nombre, precio, des);
} 


#endif TIENDA_H

