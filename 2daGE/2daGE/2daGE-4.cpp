//Ejercicio 4: Calcular experiencia necesaria para subir de nivel - if / else if / else
//Ingresar el nivel actual del personaje y calcular cuánta experiencia necesita para el próximo nivel :
//-Si el nivel es menor a 10, mostrar "Nivel bajo, necesitas 100 XP".
//- Si el nivel está entre 10 y 19, mostrar "Nivel medio, necesitas 250 XP".
//- Si el nivel es 20 o más, mostrar "Nivel alto, necesitas 500 XP".

#include <iostream>
#include "2daGE-4.h"
using namespace std;


//int main() 
//{
//	SetLevel();
//	CalculateNextLevel();
//}


void SetLevel()
{
	cout << "Wich is your current level?" << endl;
	cin >> Level;
}

void CalculateNextLevel()
{
	cout << "Your current level is " << Level << endl;
	if (Level < 10) {
		cout << "Low level. You need 100 XP to level up." << endl;
	}
	else if (Level >= 10 && Level < 20)
	{
		cout << "Mid level. You need 250 XP to level up." << endl;
	}
	else
	{
		cout << "High level. You need 500 XP to level up." << endl;
	}

}
