/*
Proyecto Supermercado Main
Yumee Chung
A01712059

Este es un proyecto para la clase TC1030 Programación Orientado a Objetos.
Es un programa que muestra los productos disponibles con sus decuentos
en el supermercado para los clientes. 
Y para los staffs, permiten agregar productos en el supermercado.
*/

#include <iostream>
#include "producto.h"
#include "tienda.h"

using namespace std;

int main (int argc, char * argv[]){
    
    int opcion = 5;
    int contrase = 0;
    string answer = "y";
    int number = 8;
    string temp_nombre;
    float temp_precio;
    int temp_des;
    int temp_ra;

    Tienda tienda;

while (opcion != 0){
    cout << "Bienvenidos a nuestro supermercado" << endl;
    cout << "Eres cliente o staff?" << endl;
    cout << "Si eres cliente escriba 1. \nSi eres staff escriba 2." << endl; //identificar el usuario
    
    if (opcion == 1){ //cliente
        tienda.crea_productos();
        cout << "Aquí está los productos disponibles con sus descuentos: " << endl;
        tienda.muestra_producto();
    }

    if (opcion == 2)
    {
        cout << "Ingresa la contraseña del staff: " << ' ';
        cin >> contrase;
        if (contrase == 8956){
            cout << "Bodega de Productos: " << endl;
            tienda.muestra_producto();
            cout << "Si quieres agregar productos inserta [SI] sino [NO]" << endl;
            cin >> answer;
            if (answer == "SI"){
                cout << "Cual categoria quieres agregar producto?" << endl;
                cout << "1. Fruta" << endl;
                cout << "2. Juego" << endl;
                cout << "3. Vegetal" << endl;
                cout << "Inserta el inciso: " << ' ';
                cin >> number;
                if (number == 1)
                {
                    cout << "Nombre: " << endl;
                    cin >> temp_nombre;
                    cout << "Precio: " << endl;
                    cin >> temp_precio;
                    cout << "Descuentos: " << endl;
                    cin >> temp_des;
                    tienda.agrega_fruta(temp_nombre, temp_precio, temp_des);
                    cout << "Lista de producto modificada: " << endl;
                    tienda.muestra_producto();
                }
                else if (number == 2)
                {
                    cout << "Nombre: " << endl;
                    cin >> temp_nombre;
                    cout << "Precio: " << endl;
                    cin >> temp_precio;
                    cout << "Descuentos: " << endl;
                    cin >> temp_des;
                    cout << "Rare (1 - 10): " << endl;
                    cin >> temp_ra;
                    tienda.agrega_juego(temp_nombre, temp_precio, temp_des, temp_ra);
                    cout << "Lista de producto modificada: " << endl;
                    tienda.muestra_producto();
                }
                else if (number == 3)
                {
                    cout << "Nombre: " << endl;
                    cin >> temp_nombre;
                    cout << "Precio: " << endl;
                    cin >> temp_precio;
                    cout << "Descuentos: " << endl;
                    cin >> temp_des;
                    tienda.agrega_vegetal(temp_nombre, temp_precio, temp_des);
                    cout << "Lista de producto modificada: " << endl;
                    tienda.muestra_producto();
                }
                else {
                    cout << "No existe ese valor en el inciso, Checa otra vez.";
                    return 0;
                }
            }
            else if (answer == "NO"){
                cout << "Gracias, que tenga buen día";
            }
            else{
                cout << "Error :(";
                return 0;
            }
        } else {
            cout << "CONTRASEÑA INCORRECTA, NO ERES STAFF";
            return 0;
        }

    } //cierre if staff

} //cierre while

} //cierre main
