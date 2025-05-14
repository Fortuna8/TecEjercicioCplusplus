// Ejercicio 2: Calcular daño recibido
// Ingresar la vida actual del personaje y cuánto daño recibe.Restar el daño a la vida y mostrar la vida resultante.


#include <iostream>

int Vida = 200;
int danoEnemigo = 20;

void RestarVida(int vida, int dano);

int main()
{
	std::cout << "La vida actual es: " << Vida << std::endl;

	RestarVida(Vida, danoEnemigo);
	RestarVida(Vida, danoEnemigo);
	RestarVida(Vida, danoEnemigo);

	return 0;
}

void RestarVida(int vida, int dano)
{
	Vida = vida - dano;
	std::cout << "Ataque recibido. La vida actual es: " << Vida << std::endl;
}
