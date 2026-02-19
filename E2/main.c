#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float X1, Y1, X2, Y2, D;
    //ALGORITMO: ENTRADA + PROCESSAMENTO (ULA)
    printf("DISTANCIA ENTRE PONTOS\n");
    printf("Coordenada X1 - PONTO P: ");
    scanf("%f", &X1);
    printf("Coordenada Y1 - PONTO P: ");
    scanf("%f", &Y1);
    printf("Coordenada X2 - PONTO P: ");
    scanf("%f", &X2);
    printf("Coordenada Y2 - PONTO P: ");
    scanf("%f", &Y2);
    //PROCESSAMENTO
    D = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    // Saída
    printf("Distancia: %f", D);
    return 0;
}
