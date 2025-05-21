//Ejercicio 1: Sumar puntos al jugador
//Pedir al usuario los puntos iniciales y los puntos ganados.Mostrar el total.

#include <iostream>

int PuntosIniciales = 100;
int PuntosObtenidos = 10;
int PuntosTotales = 0;

void SumarPuntos(int puntosActuales, int puntosExtra);

int main()
{
    PuntosTotales = PuntosIniciales;

    std::cout << "Los puntos totales son: " << PuntosTotales << std::endl;

    SumarPuntos(PuntosTotales, PuntosObtenidos);
    SumarPuntos(PuntosTotales, PuntosObtenidos);
    SumarPuntos(PuntosTotales, PuntosObtenidos);
}


void SumarPuntos(int puntos, int puntosExtra) {
    PuntosTotales = puntos + puntosExtra;
    std::cout << "Puntos obtenidos. Los puntos totales son: " << PuntosTotales << std::endl;
}