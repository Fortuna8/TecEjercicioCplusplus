//Ejercicio 11: Simulación de combate simple - Como quieran!
//Crear un programa que pida :
//
//Nombre, vida, ataque y defensa del jugador
//
//Nombre, vida, ataque y defensa del enemigo
//
//Luego :
//
//Usar una función CalcularDanio para calcular :
//
//Daño del jugador al enemigo = ataqueJugador - defensaEnemigo
//
//Daño del enemigo al jugador = ataqueEnemigo - defensaJugador
//
//Usar condicionales para asegurar que el daño no sea negativo(mínimo 0)
//
//Restar los daños a las vidas
//
//Mostrar todos los valores resultantes después del intercambio de ataques
//
//Mostrar :
//
//Vida inicial y final del jugador y del enemigo
//
//Si algún personaje queda con vida menor o igual a 0, mostrar :
//
//	“Jugador derrotado”
//
//	“Enemigo derrotado”
//
//	Si ambos quedan vivos, mostrar “El combate continúa”


#include <iostream>
#include <string>
#include <random>
#include "2daGE-11.h"
using namespace std;


// MAIN
int main() {
    Character player, enemy;

    cout << "--- Set Player Stats ---" << endl;
    player.SetStats();

    cout << "\n--- Set Enemy Stats ---" << endl;
    enemy.SetStats();

    float playerInitialHP = player.currentHealth;
    float enemyInitialHP = enemy.currentHealth;

    cout << "\n--- Initial Stats ---" << endl;
    cout << "\nPlayer Stats:\n";
    player.DisplayStats();
    cout << "\nEnemy Stats:\n";
    enemy.DisplayStats();

    cout << "\n--- Combat Phase ---" << endl;
    float dmgToEnemy = player.DealDamageTo(enemy);
    float dmgToPlayer = enemy.DealDamageTo(player);

    cout << "\n" << player.name << " deals " << dmgToEnemy << " damage to " << enemy.name << endl;
    cout << enemy.name << " deals " << dmgToPlayer << " damage to " << player.name << endl;

    cout << "\n--- Results ---" << endl;
    cout << player.name << ": HP " << playerInitialHP << " -> " << player.currentHealth << endl;
    cout << enemy.name << ": HP " << enemyInitialHP << " -> " << enemy.currentHealth << endl;

    // Resultado final del combate
    if (!player.IsAlive() && !enemy.IsAlive()) {
        cout << "\nAmbos personajes han sido derrotados." << endl;
    }
    else if (!player.IsAlive()) {
        cout << "\nJugador derrotado" << endl;
    }
    else if (!enemy.IsAlive()) {
        cout << "\nEnemigo derrotado" << endl;
    }
    else {
        cout << "\nEl combate continúa" << endl;
    }

    return 0;
}




// FUNCIONES

void Character::SetStats() {
    cout << "Enter character name: ";
    cin >> name;
    cout << "Enter attack power: ";
    cin >> attack;
    cout << "Enter defense power: ";
    cin >> defense;
    cout << "Enter max health: ";
    cin >> maxHealth;

    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> dist(maxHealth * 0.3f, maxHealth);
    currentHealth = dist(gen);
}

void Character::DisplayStats() const {
    cout << "Name: " << name
        << "\nAttack: " << attack
        << "\nDefense: " << defense
        << "\nMax Health: " << maxHealth
        << "\nCurrent Health: " << currentHealth << "\n";
}

float Character::DealDamageTo(Character& target) const {
    float damage = attack - target.defense;
    if (damage < 0) damage = 0;
    target.currentHealth -= damage;
    if (target.currentHealth < 0) target.currentHealth = 0;
    return damage;
}

bool Character::IsAlive() const {
    return currentHealth > 0;
}

