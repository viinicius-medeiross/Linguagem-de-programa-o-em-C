/*11 - ESCREVA UM PROGRAMA QUE CALCULE O CONSUMO MÉDIO DE UM AUTOMÓVEL;
SÃO FORNECIDOS A DISTÂNCIA TOTAL PERCORRIDA E O TOTAL DE COMBUSTÌVEL GASTO.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distanciaTotal = 1000;
    float gastoCombustivel = 100;
    float consumoMedio;



    printf("DISTANCIA TOTAL DO CARRO : %2.f KM \n", distanciaTotal);

    printf("GASTO TOTAL DO CARRO : %2.f  R$ \n", gastoCombustivel);

    consumoMedio = distanciaTotal / gastoCombustivel;

    printf("O CONSUMO MEDIO DO SEU CARRO E : %2.f km/l \n", consumoMedio);

    return 0;
}
