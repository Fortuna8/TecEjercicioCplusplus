// Ejercicio 6: Sistema simple de compra
// Ingresar la cantidad de monedas del jugador y el precio de un objeto.Restar el precio a las monedas y mostrar lo que le queda. (puede que se saque fiado : D)

#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

int CoinsTotal = 0;
int TicketPrice = 15;


void BuyTicket(int coins, int actualTicketPrice);

int main()
{
    std::srand(std::time(0));

    CoinsTotal = std::rand() % 101;

    std::cout << "You have " << CoinsTotal << " coins right now." << std::endl;

    if (CoinsTotal >= 15) {
        BuyTicket(CoinsTotal, TicketPrice);
    }
    else {
        std::cout << "I'm sorry :'( - You don't have enough money to buy a ticket." << std::endl;
    }

        
}

void BuyTicket(int coins, int actualTicketPrice)
{
    CoinsTotal = coins - actualTicketPrice;
    if (CoinsTotal >= 0) {
        std::cout << "You bought a ticket. Now you have " << CoinsTotal << " coins." << std::endl;
    }
    else {
        std::cout << "You bought a ticket. Now you owe " << 0 + CoinsTotal << " coins." << std::endl;
    }
}
