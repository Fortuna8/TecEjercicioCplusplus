//Ejercicio 8: Crear una funci�n que calcule da�o - if
//La funci�n CalcularDanio(int ataque, int defensa) debe devolver ataque - defensa.
//Si el resultado es menor o igual a cero, mostrar �El ataque fue in�til�.
//Si es mayor a cero, mostrar �El enemigo recibi� da�o�.
//Mostrar el valor del da�o.


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
        cout << "El ataque fue in�til." << endl;
        danio = 0;
    }
    else {
        cout << "El enemigo recibi� da�o." << endl;
    }

    cout << "Da�o causado: " << danio << endl;
    return danio;

}