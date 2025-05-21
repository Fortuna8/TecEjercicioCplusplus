//Ejercicio 5: Multiplicar monedas recogidas por un multiplicador - if / else if / else
//Pedir cantidad de monedas recogidas y un multiplicador.
//
//- Si el multiplicador es 1, mostrar “Sin bonificación”.
//
//- Si es 2, mostrar “Bonificación x2 activa”.
//
//- En cualquier otro caso, mostrar “Bonificación personalizada”.
//Mostrar el total de monedas multiplicadas.


#include <iostream>
#include "2daGE-5.h"
using namespace std;

//int main () 
//{
//	AcquireCoins();
//	MultiplyCoins();
//}

void AcquireCoins()
{
	cout << "How many coins did you acquire?" << endl;
	cin >> AquiredCoins;
	cout << "You acquired " << AquiredCoins << " coins." << endl;
}

void MultiplyCoins()
{
	cout << "How many times do you want your coins to be multiplied by?" << endl;
	cin >> CoinMultiplier;
	TotalCoins = AquiredCoins * CoinMultiplier;

	cout << "You multiplied your coins by " << CoinMultiplier << "." << endl;
	if (CoinMultiplier == 1) 
	{
		cout << "There is no bonus." << endl;
	}
	else if (CoinMultiplier == 2)
	{
		cout << "The X2 bonus was activated." << endl;
	}
	else
	{
		cout << "The custom bonus was activated." << endl;
	}
	
	cout << "Now you have " << TotalCoins << " coins." << endl;
}
