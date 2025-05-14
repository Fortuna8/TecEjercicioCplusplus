// Ejercicio 5: Multiplicar monedas recogidas por un multiplicador
// Pedir cantidad de monedas recogidas y un multiplicador.Mostrar el total de monedas multiplicadas.

#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
#include <string>
#include <algorithm>  // Para std::transform

int CoinsTotal = 0;
int CoinsObtained = 0;
int CoinsMultiplier = 3;

void GetCoins(int coins);
void MultiplyCoins(int coins, int coinsExtra);

int main()
{
    std::srand(std::time(0));

    GetCoins(CoinsObtained);
    MultiplyCoins(CoinsObtained, CoinsMultiplier);

    std::string answer;

    while (true) {
        std::cout << "Do you want to reinvest your coins? (yes/no): ";
        std::cin >> answer;

        std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower); // Convertimos a minúsculas todo para que tome las respuestas más allá de como estén escritas.

        if (answer == "yes") {
            MultiplyCoins(CoinsTotal, CoinsMultiplier);  // Reinvierte las monedas obtenidas siempre que el usuario responda "yes".
        }
        else if (answer == "no") {
            std::cout << "Thank you. Final coins: " << CoinsTotal << std::endl;
            break;  // Permite salir del bucle cuando el usuario responde "no".
        }
        else {
            std::cout << "Invalid input. Please type yes or no." << std::endl; // Se solicita al usuario que vuelva a escribir su respuesta, si no era ninguna de las dos opciones posibles.
        }
    }

    return 0;
}

void GetCoins(int coins)
{
    CoinsObtained = std::rand() % 11;
    std::cout << "" << CoinsObtained << " coins obtained." << std::endl;
}

void MultiplyCoins(int coins, int coinsExtra)
{
    CoinsTotal = coins * coinsExtra;
    std::cout << "Your coins were invested and now you have: " << CoinsTotal << std::endl;
}
