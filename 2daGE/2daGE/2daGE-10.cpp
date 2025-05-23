//Ejercicio 10: Calcular tiempo total de juego - if / else if / else
//Pedir cu�ntos minutos jug� el jugador en tres d�as distintos.
//Mostrar :
//
//	El total de minutos jugados
//
//	El promedio por d�a
//
//	Y el total en formato horas : minutos
//
//	Adem�s :
//
//Si jug� m�s de 10 horas totales, mostrar �Jugador muy activo�
//
//Si jug� entre 5 y 10 horas, mostrar �Jugador regular�
//
//Si jug� menos de 5 horas, mostrar �Jugador casual�


#include <iostream>
#include <iomanip> // Para setw y setfill
#include "2daGE-10.h"
using namespace std;



// main
//int main() {
//    PedirMinutos();
//    MostrarResultados();
//    ClasificarJugador();
//    return 0;
//}


// FUNCIONES
// Funci�n para pedir los minutos jugados
void PedirMinutos() {
    cout << "Enter minutes played on Day 1: ";
    cin >> day1;
    cout << "Enter minutes played on Day 2: ";
    cin >> day2;
    cout << "Enter minutes played on Day 3: ";
    cin >> day3;

    totalMinutes = day1 + day2 + day3;
    averageMinutes = totalMinutes / 3;
}

// Funci�n para mostrar el total, promedio y formato hh:mm
void MostrarResultados() {
    int totalHours = totalMinutes / 60;
    int totalLeftMinutes = totalMinutes % 60;

    cout << "\nTotal of minutes played: " << totalMinutes << endl;
    cout << "Average of minutes per day: " << averageMinutes << endl;
    cout << "Total time played: "
        << setw(2) << setfill('0') << totalHours << ":"
        << setw(2) << setfill('0') << totalLeftMinutes << endl;
}

// Clasificar tipo de jugador seg�n tiempo total
void ClasificarJugador() {
    int totalHours = totalMinutes / 60;

    if (totalHours > 10) {
        cout << "Jugador muy activo" << endl;
    }
    else if (totalHours >= 5) {
        cout << "Jugador regular" << endl;
    }
    else {
        cout << "Jugador casual" << endl;
    }
}


