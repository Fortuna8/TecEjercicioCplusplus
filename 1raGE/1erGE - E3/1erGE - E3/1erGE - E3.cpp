// Ejercicio 3: Curar al personaje
// Ingresar la vida actual y una cantidad de curación.Sumar la curación a la vida y mostrar la   nueva vida(aunque supere 100, ya que aún no usan condicionales).


#include <iostream>

int Vida = 200;
int DanoEnemigo = 30;
int Cura = 50;

void RestarVida(int vida, int dano);
void CurarVida(int vida, int cura);

int main()
{
	std::cout << "La vida actual es: " << Vida << std::endl;

	RestarVida(Vida, DanoEnemigo);
	RestarVida(Vida, DanoEnemigo);
	RestarVida(Vida, DanoEnemigo);
	CurarVida(Vida, Cura);
	CurarVida(Vida, Cura);

	return 0;
}

void RestarVida(int vida, int dano)
{
	Vida = vida - dano;
	std::cout << "Ataque recibido. La vida actual es: " << Vida << std::endl;
}

void CurarVida(int vida, int cura)
{
	Vida = vida + cura;
	std::cout << "Curacion recibida. La vida actual es: " << Vida << std::endl;
}