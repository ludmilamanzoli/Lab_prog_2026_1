#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float L, A, P, V;
    float p_alcool;
    float p_gasolina;
    float volume_l;
    float total_gas;
    float total_alc;
    float total_tudo;
    //ENTRADA
    printf("TANQUE DE COMBUSTIVEL\n");
    printf("Valor da largura: ");
    scanf("%f", &L);
    printf("Valor da altura: ");
    scanf("%f", &A);
    printf("Valor da profundidade: ");
    scanf("%f", &P);

    printf("Preco do litro do alcool: ");
    scanf("%f", &p_alcool);
    printf("Preco do litro da gasolina: ");
    scanf("%f", &p_gasolina);


    //PROCESSAMENTO
    V = L * A * P;
    volume_l = V * 1000;

    //CUSTO PARA ENCHER COM UM TIPO
    total_gas = volume_l * p_gasolina;
    total_alc = volume_l * p_alcool;

    //CALCULO DE PROPORÇÃO
    total_tudo = (volume_l * 0.20 * p_alcool) + (volume_l * 0.80 * p_gasolina);

    //SAÍDA
    printf("Valor a ser pago somente com gasolina: R$ %.2f\n", p_gasolina);
    printf("Valor a ser pago somente com alcool: R$ %.2f\n", p_alcool);
    printf("Valor da proporcao (20%% Alc / 80%% Gas): R$ %.2f", total_tudo);



    return 0;
}
