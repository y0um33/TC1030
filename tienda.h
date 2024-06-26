/*
Proyecto Supermercado
Yumee Chung
A01712059
14/06/2024

Esta clase define objeto Tienda que contiene 
todo el proceso para agregar, guardar y muestrar los 
productos.
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
};

/*
crea_productos genera objetos en Producto[]

genera objetos de Fruta, Vegetal, Juego y los guarda en la variable
de insancia en pro[] y va incrementando compra ya que está guardando en 
el arreglo.

@param
@return
*/

void Tienda::crea_productos() {

    //new crea el objeto en heap, polimorfismo 
    pro[compra] = new Fruta(compra, "Manzana", 32.99, 12);
    compra++;
    pro[compra] = new Fruta(compra, "Platano", 16.78, 5);
    compra++;
    pro[compra] = new Vegetal(compra, "Pepino", 6.99, 1.5);
    compra++;
    pro[compra] = new Vegetal(compra, "Lechuga", 14.99, 2);
    compra++;
    pro[compra] = new Juego(compra, "Fortnite", 45.99, 11);
    compra++;
    pro[compra] = new Juego(compra, "Roblox", 11.89, 20);
    compra++;
} 

/*
muestra_productos es un método para mostrar los productos.

Arreglo pro[] recorre todos los productos en el super mercado hasta 'compra'
que es el número total.

@param
@return
*/

void Tienda::muestra_productos() { //ciclo que recorre el arreglo pro[] y despeja cada objeto
    for (int i = 0; i < compra; i++)
        cout << pro[i] -> to_string();
} 

/*
muestra_productos imprime productos que coninciden con tipo

A través de arreglo pro[] y el número de compra, recorre el arreglo
despejando cada uno de los objetos que tienen el mismo string tipo ("fruta","vegetal","juego")

@param string tipo: 'fruta','vegetal','juego'
@return
*/

void Tienda::muestra_productos(string tipo) {
    for(int i = 0; i < compra; i++) {
        if (pro[i] -> get_tipo() == tipo)
            cout << pro[i] -> to_string();
    } 
}

/*
agrega_[] es un método crea un objeto Fruta,Vegetal,Juego y 
lo agrega al arreglo de productos

crea un objeto Fruta,Vegetal,Juego y lo agrega a arreglo de productos
usando compra. Se utiliza cómo para numerar los productos y cuando ya está agregado, 
incrementa en 1.

@param string nombre del producto, double precio y descuento
@return
*/

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
