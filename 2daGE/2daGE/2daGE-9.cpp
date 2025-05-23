//Ejercicio 9: Ingresar los stats del jugador y mostrarlos en pantalla -
//Pedir al usuario que ingrese :
//
//Nombre
//Ataque
//Defensa
//Velocidad de ataque
//Vida m�xima
//Multiplicador de da�o cr�tico
//
//Luego :
//
//Si el multiplicador es mayor a 2, mostrar �Cr�tico alto�
//
//Si es menor o igual a 1, mostrar �Cr�tico bajo�
//
//Si est� entre 1 y 2, mostrar �Cr�tico normal�
//Mostrar todos los stats.


#include <iostream>
#include "2daGE-9.h"
#include <random>
using namespace std;


// main
//int main() {
//    IngresarStatsJugador();
//    MostrarStatsJugador();
//    MostrarCritico();
//    return 0;
//}


// FUNCIONES
// Funci�n para ingresar los stats
void IngresarStatsJugador() {
    cout << "Insert the player's stats." << endl;
    cout << "Player name: ";
    cin >> PlayerName;
    cout << "Player attack power: ";
    cin >> AttackPower;
    cout << "Player attack speed: ";
    cin >> AttackSpeed;
    cout << "Player critical damage multiplier: ";
    cin >> CriticalDamageMultiplier;
    cout << "Player defense power: ";
    cin >> DefensePower;
    cout << "Player max health: ";
    cin >> PlayerMaxHealth;

    // Vida aleatoria
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> dist(PlayerMaxHealth * 0.3f, PlayerMaxHealth);
    PlayerHP = dist(gen);
}

// Funci�n para mostrar el multiplicador del cr�tico
void MostrarCritico() {
    if (CriticalDamageMultiplier > 2) {
        cout << "Cr�tico alto" << endl;
    }
    else if (CriticalDamageMultiplier <= 1) {
        cout << "Cr�tico bajo" << endl;
    }
    else {
        cout << "Cr�tico normal" << endl;
    }
}

// Funci�n para mostrar los stats
void MostrarStatsJugador() {
    cout << "\n- Player Stats -" << endl;
    cout << "Name: " << PlayerName << endl;
    cout << "Attack Power: " << AttackPower << endl;
    cout << "Attack Speed: " << AttackSpeed << endl;
    cout << "Critical Damage Multiplier: " << CriticalDamageMultiplier << endl;
    cout << "Defense Power: " << DefensePower << endl;
    cout << "Max Health: " << PlayerMaxHealth << endl;
    cout << "Current Health: " << PlayerHP << endl;
}