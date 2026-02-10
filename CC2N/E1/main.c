#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // ALGORITMO: ENTRADA + PROCESSAMENTO (ULA) + SAÍDA
    // ENTRADA
    int N1, N2; /* Aqui criamos duas variáveis inteiras: */
    printf("MINI CALCULADORA DE INTEIROS: N1 E N2\n");
    printf("VALOR DE N1: "); /* Pede para o usuário digitar o N1 */
    scanf("%i", &N1); /* Guarda esse valor dentro da variável N1 */
    printf("VALOR DE N2: "); /* Pede para o usuário digitar o N2 */
    scanf("%i", &N2); /* Guarda esse valor dentro da variável */
    // ALGORITMO: PROCESSAMENTO (ULA) + SAIDA
    printf("ADICAO: N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
    printf("SUBTRACAO: N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
    printf("MULTIPLICACAO: N1 * N2 = %i * %i = %i\n", N1, N2, N1 * N2);
    printf("DIVISAO(float): N1 / N2 = %i / %i = %.1f\n", N1, N2, 1.0 * N1 / N2);
    printf("DIVISAO(float): N1 / N2 = %i / %i = %.1f\n", N1, N2, (float)N1 / N2);
    printf("QUOCIENTE(int): N1 div N2 = %i / %i = %i\n", N1, N2, N1 / N2);
    printf("RESTO(int): N1 mod N2 = %i %% %i = %i\n", N1, N2, N1 % N2);
    printf("POTENCIACAO: pow(N1, N2) = pow(%i, %i) =  %.1f\n", N1, N2, pow(N1, N2));
    printf("RADICIACAO: RAIZ(N1, N2) = RAIZ(%i, %i) =  %.1f\n", N1, N2, pow(N1, 1.0 / N2));

    return 0;
}
