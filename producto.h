#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

#include <sstream>

using namespace std;

/*
Esta clase define el objeto de tipo Producto que contiene las clases
heredadas a Fruta, Juego y Vegetal
*/

class Producto {
    //variables de instancia (propias de cada objeto)
    protected:
        int num_articulo;
        string nombre;
        float precio;
        string categoria;
    //métodos
    public:
        Producto(): num_articulo(0), nombre(""), precio(0), categoria(""){}; //constructor
        Producto(int num, string name, float pre, string cat): //sobrecarga
        num_articulo(num), nombre(name), precio(pre), categoria(cat) {};
    
    int get_num() {
        return num_articulo;
    }

    string get_nombre() {
        return nombre;
    }

    float get_precio() {
        return precio;
    }

    string get_categoria() {
        return categoria;
    }

    virtual int descuento() = 0; //método abstracto será sobreescrito, puede ser redefinido en cualquier clase
    virtual string to_string() = 0;
};

class Fruta: public Producto {
    private:
        int descuento_producto;
    public:
        Fruta(): Producto(0, "", 0, "Fruta") {};
        Fruta(int num_articulo, string nombre, float precio, int des): Producto(num_articulo, nombre, precio, "fruta"),
        descuento_producto(des) {};

        int get_num(){
            return num_articulo;
        }

        string get_nombre() {
            return nombre;
        }

        float get_precio() {
            return precio; 
        }

        int descuento() {
            return descuento_producto + 15; //sobreescrito
        }

        string to_string();
};

/*
to_string convierte los atributos a string. Concatena todos los valores en un string
para imprimir
*/

string Fruta::to_string() {

    stringstream aux;
    aux << "Número de artículo: " << num_articulo << "\n" << "El nombre del producto es: " << nombre << ' ' <<
    "en la categoria de: " << categoria << "\n" << "Su precio es: " << precio << "\n" 
    << " Su descuento es: " << descuento << "\n";
    return aux.str();
    }

class Juego:public Producto {
    private:
        int descuento_producto;
        int rare;
    public:
        Juego(): Producto(0, "", 0, "Juego") {}; //constructor
        Juego(int num_articulo, string nombre, float precio, int des, int ra): Producto(num_articulo, nombre, precio, "Juego"), //sobrecarga
        descuento_producto(des),
        rare(ra) {};

        int descuento() {
            return descuento_producto - rare; //sobreescrito
        }

        string to_string();
};

/*
to_string convierte los atributos a string. Concatena todos los valores en un string
para imprimir
*/

string Juego::to_string() {

    stringstream aux;
    aux << "Número de artículo: " << num_articulo << "\n" << "El nombre del producto es: " << nombre << ' ' <<
    "en la categoria de: " << categoria << "\n" << "Su precio es: " << precio << "\n" 
    << " Su descuento es: " << descuento << "\n";
    return aux.str();
}

class Vegetal:public Producto {
    private:
        int descuento_producto;
    public:
        Vegetal(): Producto(0, "", 0, "Vegetal") {}; //constructor
        Vegetal(int num_articulo, string nombre, float precio, int des): Producto(num_articulo, nombre, precio, "Vegetal"), //sobrecarga
        descuento_producto(des) {};

        int descuento() {
            return descuento_producto + 10; //sobreescrito
        }

        string to_string();
};

/*
to_string convierte los atributos a string. Concatena todos los valores en un string
para imprimir
*/

string Vegetal::to_string() {

    stringstream aux;
    aux << "Número de artículo: " << num_articulo << "\n" << "El nombre del producto es: " << nombre << ' ' <<
    "en la categoria de: " << categoria << "\n" << "Su precio es: " << precio << "\n" 
    << " Su descuento es: " << descuento << "\n";
    return aux.str();
}

#endif
