// Ejercicio 8: Crear una función que calcule daño
// La función CalcularDanio debe recibir ataque y defensa, y devolver el resultado de ataque menos defensa.No limitar el resultado.

#include <iostream>
#include <cstdlib>
#include <ctime>

int AttackPower = 0;
int DefensePower = 0;

void CalculateDamage(float attack, float defense);

int main()
{
    std::srand(std::time(0));
    
    AttackPower = rand() % 101;
    DefensePower = rand() % 51;
    std::cout << "Attack power is: " << AttackPower << std::endl;
    std::cout << "Defense power is: " << DefensePower << std::endl;
      

    CalculateDamage(AttackPower, DefensePower);
}

void CalculateDamage(float attack, float defense)
{
    int TotalDamage = 0;
    TotalDamage = attack - defense;
    if (TotalDamage > 0) {
        std::cout << "Attack successful. The total damage is: " << TotalDamage << std::endl;
    }
    else {
        std::cout << "Attack failed. No damage done." << std::endl;
    }
}
