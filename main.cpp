#include <iostream>

#include "producto.h"

#include "tienda.h"

using namespace std;

int main(int argc, char * argv[]) {
    int opcion = 11;
    int constaff = 0;
    int respuesta;
    string answer = "y";
    string temp_nombre;
    double temp_precio;
    double temp_desc;

    Tienda tienda;

    while (opcion != 0){
        cout << "BIENVENIDO A NUESTRO SUPERMERCADO" << endl;
        cout << "1. Staff" << endl;
        cout << "2. Cliente" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingresa tu opción: ";
        cin >> opcion;

        if (opcion == 1){
            cout <<"Ingresa la Contraseña del Staff:" << ' ';
            cin >> constaff;
            if (constaff == 8956) {
                cout << "Los productos disponibles son: " << endl;
                tienda.crea_productos();
                tienda.muestra_productos();
                cout << "Desea agregar productos? [SI] sino [NO]" << endl;
                cin >> answer;
                if (answer == "SI"){
                    cout << "Que producto deseas agregar: " << endl;
                    cout << "1. Fruta" << endl;
                    cout << "2. Vegetal" << endl;
                    cout << "3. Juego" << endl;
                    cin >> respuesta;
                    if (respuesta == 1)
                    {
                    cout << "Nombre del producto: " << ' ';
                    cin >> temp_nombre;
                    cout << "Precio del producto: " << ' ';
                    cin >> temp_precio;
                    cout << "Descuento del producto: " << ' ';
                    cin >> temp_desc;
                    tienda.agrega_fruta(temp_nombre,temp_precio,temp_desc);
                    cout << "Producto modificado" << endl;
                    tienda.muestra_productos();
                    }//SI FRUTA

                    else if (respuesta == 2)
                    {
                    cout << "Nombre del producto: " << ' ';
                    cin >> temp_nombre;
                    cout << "Precio del producto: " << ' ';
                    cin >> temp_precio;
                    cout << "Descuento del producto: " << ' ';
                    cin >> temp_desc;
                    tienda.agrega_vegetal(temp_nombre,temp_precio,temp_desc);
                    cout << "Producto modificado" << endl;
                    tienda.muestra_productos();
                    }//SI VEGETAL

                    else if (respuesta == 3)
                    {
                    cout << "Nombre del producto: " << ' ';
                    cin >> temp_nombre;
                    cout << "Precio del producto: " << ' ';
                    cin >> temp_precio;
                    cout << "Descuento del producto: " << ' ';
                    cin >> temp_desc;
                    tienda.agrega_juego(temp_nombre,temp_precio,temp_desc);
                    cout << "Producto modificado" << endl;
                    cout << endl;
                    tienda.muestra_productos();
                    }
                    else {
                        cout << "ERROR :(" << endl;
                    }//else answer

                } //SI

                else if (answer == "NO"){
                    cout << "Gracias" << endl;
                }//NO

            }//PIN STAFF

            else {
                cout << "NO TE PODEMOS IDENTIFICAR";
                return 0;
            }//else pin

        }

        if (opcion == 2){
            cout << endl;
            tienda.crea_productos();
            cout << "Bienvenido a nuestro supermercado: " << endl;
            tienda.muestra_productos();
            cout << endl;
        } //usuario
    }

    if (opcion == 0)
    {
        cout << "Adios" << endl;
    }
    
}; //fin main
