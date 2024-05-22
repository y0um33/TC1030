/*
Proyecto
Yumee Chung
A01712059

Esta clase defina objeto de tipo Producto que contiene las clases heredadas
Fruta, Vegetal y Juego
*/

#ifndef TIENDA_H
#define TIENDA_H

#include <string>

#include <iostream>

#include <sstream>

#include "producto.h"

using namespace std;

const int MAX = 1000; //constante de tamaños de arreglos

class Tienda {
    private: //variables de instancia
    Producto*pro[MAX]; //apuntador para usar polimorfismo, arreglos de punteros a objetos de tipo Producto
    int compra;

    public: //métodos y constructor default
    Tienda(): compra(0) {}; //construtor por default

    void crea_productos();
    void muestra_productos();
    void muestra_productos(string tipo);
    void agrega_fruta(string nombre, double precio, double discount);
    void agrega_vegetal(string nombre, double precio, double discount);
    void agrega_juego(string nombre, double precio, double discount);
}; //Fin de Tienda

/*
crea_productos genera objetos en Producto[]


*/
void Tienda::crea_productos() {

    pro[compra] = new Fruta(compra, "Manzana", 32.99, 12);
    compra++;
    pro[compra] = new Vegetal(compra, "Pepino", 6.99, 1.5);
    compra++;
    pro[compra] = new Juego(compra, "Fortnite", 45.99, 11);
    compra++;
} //fin crea_productos

void Tienda::muestra_productos() {
    for (int i = 0; i < compra; i++)
        cout << pro[i] -> to_string();
} //fin muestra_producto

void Tienda::muestra_productos(string tipo) {
    for(int i = 0; i < compra; i++) {
        if (pro[i] -> get_tipo() == tipo)
            cout << pro[i] -> to_string();
    } 
} //fin muestra_producto

void Tienda::agrega_fruta(string nombre, double precio, double discount) {
    pro[compra] = new Fruta(compra, nombre, precio, discount);
    compra++;
} //fin agrega_fruta

void Tienda::agrega_vegetal(string nombre, double precio, double discount) {
    pro[compra] = new Vegetal(compra, nombre, precio, discount);
    compra++;
} //fin agrega_vegetal

void Tienda::agrega_juego(string nombre, double precio, double discount) {
    pro[compra] = new Juego(compra, nombre, precio, discount);
    compra++;
} //fin agrega_juego

#endif

