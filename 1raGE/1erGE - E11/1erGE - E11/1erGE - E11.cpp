// Ejercicio 11: Simulación de combate simple.
// Crear un programa que pida el nombre, vida, ataque y defensa del jugador, y también los datos del enemigo.
// Usar una función para calcular el daño del jugador al enemigo y viceversa(ataque menos defensa).
// Restar los daños a las vidas de ambos personajes.
// Mostrar los resultados en pantalla : vida inicial y final del jugador y del enemigo.
// simplemente mostrar todos los valores resultantes después del intercambio de ataques.

#include <iostream>
#include <string>
#include <random>

class Character {
public:
    std::string name;
    float attack;
    float defense;
    float maxHealth;
    float currentHealth;

    void SetStats() {
        std::cout << "Enter character name: ";
        std::cin >> name;
        std::cout << "Enter attack power: ";
        std::cin >> attack;
        std::cout << "Enter defense power: ";
        std::cin >> defense;
        std::cout << "Enter max health: ";
        std::cin >> maxHealth;

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<float> dist(maxHealth * 0.3f, maxHealth);
        currentHealth = dist(gen);
    }

    void DisplayStats() const {
        std::cout << "Name: " << name << "\nAttack: " << attack
            << "\nDefense: " << defense << "\nMax Health: " << maxHealth
            << "\nCurrent Health: " << currentHealth << "\n";
    }

    float DealDamageTo(Character & target) const {
        float damage = attack - target.defense;
        if (damage < 0) damage = 0;
        target.currentHealth -= damage;
        if (target.currentHealth < 0) target.currentHealth = 0;
        return damage;
    }

    bool IsAlive() const {
        return currentHealth > 0;
    }
};

int main() {
    Character player, enemy;

    std::cout << "--- Set Player Stats ---" << std::endl;
    player.SetStats();

    std::cout << "\n--- Set Enemy Stats ---" << std::endl;
    enemy.SetStats();

    std::cout << "\n--- Initial Stats ---" << std::endl;
    std::cout << "\nPlayer Stats:\n";
    player.DisplayStats();
    std::cout << "\nEnemy Stats:\n";
    enemy.DisplayStats();

    std::cout << "\n--- Combat Begins ---\n";

    int turn = 1;
    while (player.IsAlive() && enemy.IsAlive()) {
        std::cout << "\n--- Turn " << turn << " ---" << std::endl;

        float dmgToEnemy = player.DealDamageTo(enemy);
        std::cout << player.name << " deals " << dmgToEnemy << " damage to " << enemy.name << std::endl;
        std::cout << enemy.name << " now has " << enemy.currentHealth << " HP\n";

        if (!enemy.IsAlive()) {
            std::cout << enemy.name << " has been defeated!" << std::endl;
            break;
        }

        float dmgToPlayer = enemy.DealDamageTo(player);
        std::cout << enemy.name << " deals " << dmgToPlayer << " damage to " << player.name << std::endl;
        std::cout << player.name << " now has " << player.currentHealth << " HP\n";

        if (!player.IsAlive()) {
            std::cout << player.name << " has been defeated!" << std::endl;
            break;
        }

        ++turn;
    }

    std::cout << "\n--- Combat Ended ---\n";
    std::cout << player.name << "'s Final HP: " << player.currentHealth << std::endl;
    std::cout << enemy.name << "'s Final HP: " << enemy.currentHealth << std::endl;

    return 0;
}