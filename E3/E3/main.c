#include <stdio.h>
#include <stdlib.h>
#define COTACAO_DOLAR 5.21
#define COTACAO_EURO 6.13

int main()
{
    //ENTRADA
    float R, E, D;
    printf("CASA DE CAMBIO");
    printf("Digite o valor em real: \n");
    scanf("%f", &R);

    //PROCESSAMENTO
    D = R / COTACAO_DOLAR;
    E = R / COTACAO_EURO;

    //RESULTADO
    printf("Valor em dolar: %.2f\n", D);
    printf("Valor em euro: %.2f", E);


    return 0;
}
