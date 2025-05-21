#pragma once

// Enums
enum ETiposDeItems
{
	Sword,
	Shield,
	Potion,
};

// Funciones
void SetInitialCoins();
void SelectItem();


// Variables
int InitialCoins;
int CurrentCoins;
int ItemSelected;
int ItemPrice;
