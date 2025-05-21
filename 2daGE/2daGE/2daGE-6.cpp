//Ejercicio 6: Sistema simple de compra - enumerador y switch
//Definir un enum con tipos de objetos : ESPADA = 1, ESCUDO = 2, POTION = 3.
//Pedir al usuario la cantidad de monedas y el tipo de objeto a comprar.
//Usar un switch para restar el precio según el objeto :
//
//-Espada cuesta 100
//
//- Escudo cuesta 75
//
//- Poción cuesta 25
//
//Mostrar las monedas restantes.
//Si no hay suficientes monedas, mostrar “No puedes comprar este objeto”.


#include <iostream>
#include "2daGE-6.h"
using namespace std;


//int main() 
//{
//	SetInitialCoins();
//	SelectItem();
//}

void SetInitialCoins()
{
	cout << "How many coins do you have?" << endl;
	cin >> InitialCoins;
	cout << "You start with " << InitialCoins << " coins." << endl;

	CurrentCoins = InitialCoins;
}

void SelectItem()
{
	cout << "Please choose the number of the item you want to buy: " << endl;
	cout << "0 - Sword - It costs 75 coins." << endl;
	cout << "1 - Shield - It costs 120 coins." << endl;
	cout << "2 - Potion - It costs 50 coins." << endl;
	cin >> ItemSelected;

	switch (ItemSelected)
	{
	case Sword:
		cout << "You selected a sword." << endl;
		ItemPrice = 75;
		break;
	case Shield:
		cout << "You selected a shield." << endl;
		ItemPrice = 120;
		break;
	case Potion:
		cout << "You selected a potion." << endl;
		ItemPrice = 50;
		break;
	default:
		break;
	}

	if (CurrentCoins >= ItemPrice)
	{
		CurrentCoins -= ItemPrice;
		cout << "Now you have " << CurrentCoins << " coins." << endl;
	}
	else
	{
		cout << "You don't have enough money to buy that item" << endl;
	}
}
