// Ejercicio 2: Calcular daño recibido- if.
// Ingresar la vida actual del personaje y cuánto daño recibe.
// Restar el daño a la vida.
// Si la vida resultante es menor o igual a 0, mostrar “¡Has muerto!”.
// Mostrar la vida resultante.

#include <iostream>
#include "2daGE-2.h"
using namespace std;


//int main() 
//{
//	SetLifePoints();
//	SetDamage();
//	CalculateLifePoints();
//
//}

void SetLifePoints()
{
	cout << "Please enter your initial life points:" << endl;
	cin >> StartingLifePoints;
};

void SetDamage()
{
	cout << "Please enter the damage recieved:" << endl;
	cin >> Damage;
};

void CalculateLifePoints()
{
	LifePoints = StartingLifePoints;
	LifePoints -= Damage;
	if (LifePoints > 0) {
		cout << StartingLifePoints << " life points minus " << Damage << " damage leaves you with just " << LifePoints << " life points." << endl;
	}
	else {
		cout << "You are dead!" << endl;
	}
	;
};