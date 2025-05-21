//Ejercicio 3: Curar al personaje - if / else
//Ingresar la vida actual y una cantidad de curación.
//Sumar la curación a la vida.
//Si la vida supera 100, mostrar "Vida máxima alcanzada".
//Si es menor a 100, mostrar "Aún puedes curarte más".
//Mostrar la vida resultante.


#include <iostream>
#include "2daGE-3.h"
using namespace std;


//int main()
//{
//	SetHealth();
//	Cure();
//}

void SetHealth()
{
	cout << "Set your initial health points." << endl;
	cin >> InitialHealth;
	cout << "Your initial health points are " << InitialHealth << endl;
};

void Cure() {
	HealthPoints = InitialHealth;
	cout << "Choose how many health points you want to cure: " << endl;
	cin >> CurePoints;
	HealthPoints += CurePoints;
	if (HealthPoints >= 100) {
		HealthPoints = 100;
		cout << "Yout current health points are " << HealthPoints << ". Max health points reached." << endl;
	}
	else {
		cout << "Yout current health points are " << HealthPoints << ". You can still cure yourself." << endl;
	}
};