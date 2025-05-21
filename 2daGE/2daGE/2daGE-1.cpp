// Ejercicio 1: Sumar puntos al jugador- if.
// Pedir al usuario los puntos iniciales y los puntos ganados.
// Si los puntos ganados son mayores a 100, mostrar un mensaje especial de "¡Gran puntuación!".
// Mostrar el total.
//

#include <iostream>
#include "2daGE-1.h"
using namespace std;


//int main()
//{
//    AquirePoints();
//    CountPoints();
//}

void AquirePoints()
{
    cout << "You start with " << StartingPoints << " points." << endl;
    cout << "How many points would you like to acquire?" << endl;
    cin >> AcquiredPoints;
    TotalPoints = StartingPoints + AcquiredPoints;

    cout << "You acquired " << AcquiredPoints << " points." << endl;
}

void CountPoints()
{
    
    if (TotalPoints >= 100) {
        cout << "Now you have " << TotalPoints << " points. Congratulations! Great score achieved!" << endl;
    }
    else {
        cout << "Now you have " << TotalPoints << " points. Keep trying!" << endl;
    }
}
