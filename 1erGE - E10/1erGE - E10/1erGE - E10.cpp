// Ejercicio 10: Calcular tiempo total de juego
// Pedir cuántos minutos jugó el jugador en tres días distintos.Mostrar el total y el promedio por Día y mostrarlos en pantalla en formato hs : mm

#include <iostream>
#include <iomanip>  // Para std::setfill y std::setw

int main()
{
    int day1 = 0, day2 = 0, day3 = 0;

    std::cout << "Enter minutes played on Day 1: ";
    std::cin >> day1;

    std::cout << "Enter minutes played on Day 2: ";
    std::cin >> day2;

    std::cout << "Enter minutes played on Day 3: ";
    std::cin >> day3;
    std::cout << "" << std::endl;

    
    int TotalInMinutes = day1 + day2 + day3;
    int AverageMinutesPerDay = TotalInMinutes / 3;

    int TotalInHours = TotalInMinutes / 60;
    int TotalInHoursLeftMinutes = TotalInMinutes % 60;
    int AverageInHours = AverageMinutesPerDay / 60;
    int AverageInHoursLeftMinutes = AverageMinutesPerDay % 60;

    std::cout << "Total of minutes played: " << TotalInMinutes << std::endl;
    std::cout << "Average of minutes played per day: " << AverageMinutesPerDay << std::endl;

    std::cout << "Total time played: " << TotalInHours << ":" << TotalInHoursLeftMinutes << std::endl;
    std::cout << "Average time played per day: " << AverageInHours << ":" << AverageInHoursLeftMinutes<< std::endl;
}

