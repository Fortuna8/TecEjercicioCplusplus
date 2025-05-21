// Ejercicio 9: Ingresar los stats del jugador y mostrarlo en pantalla
// Pedir al usuario que ingrese su nombre, ataque, defensa, velocidad de ataque, vida maxima, multiplicador de danio critico  y mostrar sus stats.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>  // Librería para aleatorios modernos

std::string PlayerName = "";
float AttackPower = 0;
float AttackSpeed = 0;
float DefensePower = 0;
float PlayerMaxHealth = 0.0;
float PlayerHP = 0;
float CriticalDamageMultiplier = 0;


int main()
{
    std::srand(std::time(0));


    std::cout << "Insert the player's stats." << std::endl;
    std::cout << "Player name:" << std::endl;
    std::cin >> PlayerName;
    std::cout << "Player attack power:" << std::endl;
    std::cin >> AttackPower;
    std::cout << "Player attack speed:" << std::endl;
    std::cin >> AttackSpeed;
    std::cout << "Player critical damage multiplier:" << std::endl;
    std::cin >> CriticalDamageMultiplier;
    std::cout << "Player defense power:" << std::endl;
    std::cin >> DefensePower;
    
    std::cout << "Player max health:" << std::endl;
    std::cin >> PlayerMaxHealth;
    // Generador aleatorio moderno para HP entre 30% y 100% de la vida máxima
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<float> dist(PlayerMaxHealth * 0.3f, PlayerMaxHealth);
    PlayerHP = dist(gen);
    
    std::cout << "All the player's stats are set." << std::endl;
    std::cout << "" << std::endl;

    std::cout << "- Player stats -" << std::endl;
    std::cout << "Player name is: " << PlayerName << std::endl;
    std::cout << "Player attack power is: " << AttackPower << std::endl;
    std::cout << "Player attack speed is: " << AttackSpeed << std::endl;
    std::cout << "Player critical damage multiplier is: " << CriticalDamageMultiplier << std::endl;
    std::cout << "Player defense power is: " << DefensePower << std::endl;
    std::cout << "Player max health is: " << PlayerMaxHealth << std::endl;
    std::cout << "Player current health is: " << PlayerHP << std::endl;


    //for (int i = 0; i < 10; ++i) {
      //  PlayerHP = PlayerMaxHealth * (0.3f + static_cast<float>(rand()) / RAND_MAX * 0.7f);
        //std::cout << "PlayerHP generado: " << PlayerHP << std::endl;
    //}

}

