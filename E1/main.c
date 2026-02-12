#include <stdio.h>
#include <stdlib.h>



int main()
{
       // ENTRADA
       float preco, reajuste, totalSemDesconto;
       float totalComDesconto, desconto;
       int quantidade;
       printf("MERCADORIA: Dados de Entrada\n");
       printf("Preco (R$):");
       scanf("%f", &preco);
       printf("Quantidade (Unidade):");
       scanf("%i", &quantidade);
       printf("Reajuste (%%): ");
       scanf("%f", &reajuste);
       // PROCESSAMENTO
       totalSemDesconto = preco * quantidade;
       desconto = reajuste / 100 * totalSemDesconto;
       totalComDesconto = totalSemDesconto - desconto;
       // SAÍDA (Objetivos):
       printf("Total a pagar com desconto:R$ %.2f\n", totalComDesconto);
       printf("Total a pagar(%.2f %% OFF): R$ %.2f\n", reajuste, totalSemDesconto);
       printf("Total de desconto(-%.2f %% OFF): R$ %.2f\n", reajuste, desconto);
    return 0;
}
