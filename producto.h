/*
Proyecto
Yumee Chung
A01712059

Esta clase defina objeto de tipo Producto que contiene las clases heredadas
Fruta, Vegetal y Juego
*/
#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Producto { //clase producto
    protected: //varaiables de instancia
    int id;
    string nombre;
    double precio;
    string tipo;

    public: //métodos
    Producto(): id(0), nombre(""), precio(0), tipo("") {}; //constructor por default
    Producto(int num, string nom, double pre, string tip): //sobrecarga
    id(num), nombre(nom), precio(pre), tipo(tip) {};

    int get_id() {
        return id;
    }

    string get_nombre() {
        return nombre;
    }

    double get_precio() {
        return precio;
    }

    string get_tipo() {
        return tipo;
    }

    virtual double descuento() = 0; //método abstracto será sobreescrito
    virtual string to_string() = 0;
};

class Fruta:public Producto { //class fruta heredada métodos de Producto
    //variables de instancia
    private: double descuento_exac;

    //métodos
    public:
    Fruta(): Producto(0,"",0,"Fruta") {}; //constructor default
    Fruta(int id, string nombre, double precio, double des):Producto(id,nombre,precio,"Fruta"), //sobrecarga
    descuento_exac(des) {};

    int get_id() {
        return id;
    }

    string get_nombre() {
        return nombre;
    }

    double get_precio() {
        return precio;
    }

    double descuento() { //sobreescrito
        return descuento_exac; //el contenido es distinto
    }
    string to_string();
}; //Fin de Fruta

/*
to_string convierte atributos a string.
Juntan todos los valores de los atritubos en un string e imprime.
*/

string Fruta::to_string() {

    stringstream aux;
    aux << "ID es: " << id << endl << "Producto es: " << nombre << endl
    << "Precio es: " << precio << ' ' << "con un descuento de " << descuento_exac
    << ' ' << "en la categoría: " << tipo << "\n";
    return aux.str();
}

class Vegetal: public Producto { //class vegetal heredada métodos de producto
    //variables de instancia
    private: double descuento_exac;

    //métodos
    public:
    Vegetal(): Producto(0,"",0,"Vegetal") {}; //constructor por default
    Vegetal(int id, string nombre, double precio, double des):Producto(id,nombre,precio,"Vegetal"), //sobrecarga
    descuento_exac(des) {};

    int get_id() {
        return id;
    }

    string get_nombre() {
        return nombre;
    }

    double get_precio() {
        return precio;
    }

    double descuento() { //sobreescrito
        return descuento_exac;
    }
    string to_string();

}; //Fin de Vegetal

/*
to_string convierte atributos a string.
Juntan todos los valores de los atritubos en un string e imprime.
*/

string Vegetal::to_string() {

    stringstream aux;
    aux << "ID es: " << id << endl << "Producto es: " << nombre << endl
    << "Precio es: " << precio << ' ' << "con un descuento de " << descuento_exac
    << ' ' << "en la categoría: " << tipo << "\n";
    return aux.str();
}

class Juego:public Producto { //class juego heredada métodos de producto
    //variables de instancia
    private: double descuento_exac;

    //métodos
    public:
    Juego(): Producto(0,"",0,"Juego") {}; //constructor por default
    Juego(int id, string nombre, double precio, double des):Producto(id,nombre,precio,"Juego"), //sobrecarga
    descuento_exac(des) {};

    int get_id() {
        return id;
    }

    string get_nombre() {
        return nombre;
    }

    double get_precio() {
        return precio;
    }

    double descuento() { //sobreescrito
        return descuento_exac;
    }
    string to_string();

}; //Fin de Juego

/*
to_string convierte atributos a string.
Juntan todos los valores de los atritubos en un string e imprime.
*/

string Juego::to_string() {

    stringstream aux;
    aux << "ID es: " << id << endl << "Producto es: " << nombre << endl
    << "Precio es: " << precio << ' ' << "con un descuento de " << descuento_exac
    << ' ' << "en la categoría: " << tipo << "\n";
    return aux.str();
}

#endif
