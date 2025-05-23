//Ejercicio 7: Crear una función que sume dos números - enumerador y switch
//Crear una función Sumar(int a, int b) que devuelva el resultado.
//Usar un enum con tipos de recursos : PUNTOS = 1, MONEDAS = 2, EXPERIENCIA = 3.
//Pedir al usuario qué tipo de recurso quiere sumar y usar switch para mostrar un mensaje acorde :
//
//“Has ganado puntos”
//
//“Has ganado monedas”
//
//“Has ganado experiencia”
//
//Mostrar el total sumado.

#include <iostream>
#include "2daGE-7.h"
using namespace std;


//int main() {
//  
//    cout << "Ingrese el primer valor: ";
//    cin >> valor1;
//
//    cout << "Ingrese el segundo valor: ";
//    cin >> valor2;
//
//    cout << "Seleccione el tipo de recurso a sumar:" << endl;
//    cout << "1 - Puntos\n2 - Monedas\n3 - Experiencia\n";
//    cin >> tipo;
//
//    total = Sumar(valor1, valor2);
//
//    switch (tipo) {
//    case PUNTOS:
//        cout << "Has ganado " << total << " puntos!" << endl;
//        break;
//    case MONEDAS:
//        cout << "Has ganado " << total << " monedas!" << endl;
//        break;
//    case EXPERIENCIA:
//        cout << "Has ganado " << total << " de experiencia!" << endl;
//        break;
//    default:
//        cout << "Tipo de recurso no válido." << endl;
//        return 1; // Salida anticipada
//    }
//
//
//    return 0;
//
//}


// Funcion
int Sumar(int a, int b) {
    return a + b;
}