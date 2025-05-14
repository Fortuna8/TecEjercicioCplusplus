// Ejercicio 7: Crear una función que sume dos números
// Crear una función llamada Sumar que reciba dos números y devuelva el resultado.Usarla para sumar puntos, monedas u otro recurso.


#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

int Alfa = 0;
int Omega = 0;

void SUMAR(float numeroA, float numeroB);


int main()
{
	std::srand(std::time(0));

	Alfa = rand() % 101;
	Omega = (rand() % 10 + 1) * 100;

	std::cout << "Alfa: " << Alfa << std::endl;
	std::cout << "Omega: " << Omega << std::endl;

	SUMAR(Alfa, Omega);
}

void SUMAR(float numeroA, float numeroB)
{
	int Aloma = 0;
	Aloma = numeroA + numeroB;
	std::cout << "El resultado de sumar Alfa y Omega es: " << Aloma << std::endl;
}
