// Ejercicio 4: Calcular experiencia necesaria para subir de nivel
// Ingresar el nivel actual del personaje y calcular cuánta experiencia necesita para el próximo nivel.

#include <iostream>
#include <cstdlib>
#include <ctime>

int ExperienceTotal = 0;
int CharacterLevel = 0;

void CalculateCharLevel(int experiencePointsTotal);
void CalculateExpToNextLevel(int actualCharLevel, int experiencePointsTotal);

int main()
{
    std::srand(std::time(0)); //Genera una seed distitna para cada número aleatorio dependiendo del momento en el que se ejecute.
    
    ExperienceTotal = 1000 + std::rand() % 9001;; //Genera un número aleatorio entre 1000 y 10000(incluído).
    
    std::cout << "Random Experience Points: " << ExperienceTotal << std::endl;

    CalculateCharLevel(ExperienceTotal);
    CalculateExpToNextLevel(CharacterLevel, ExperienceTotal);
    
    return 0;
}

void CalculateCharLevel(int experiencePointsTotal)
{
    CharacterLevel = ceil (experiencePointsTotal / 1000);
    std::cout << "Character Level is: " << CharacterLevel << std::endl;
}

void CalculateExpToNextLevel(int actualCharLevel, int experiencePointsTotal)
{
    int Result = 0;
    Result = (actualCharLevel +1) *1000 - experiencePointsTotal;
    std::cout << "Experience points needed to level up: " << Result << std::endl;
}
