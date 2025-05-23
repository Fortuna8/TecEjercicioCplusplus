//Ejercicio 8: Crear una función que calcule daño - if
//La función CalcularDanio(int ataque, int defensa) debe devolver ataque - defensa.
//Si el resultado es menor o igual a cero, mostrar “El ataque fue inútil”.
//Si es mayor a cero, mostrar “El enemigo recibió daño”.
//Mostrar el valor del daño.


#include <iostream>
#include "2daGE-8.h"
using namespace std;



//int main() 
//{
//    
//    cout << "Ingrese el poder de ataque: ";
//    cin >> ataque;
//
//    cout << "Ingrese la defensa del enemigo: ";
//    cin >> defensa;
//
//    CalcularDanio(ataque, defensa);
//
//    return 0;
//}


//Funciones
int CalcularDanio(int a, int d) {
    int danio = a - d;

    if (danio <= 0) {
        cout << "El ataque fue inútil." << endl;
        danio = 0;
    }
    else {
        cout << "El enemigo recibió daño." << endl;
    }

    cout << "Daño causado: " << danio << endl;
    return danio;

}