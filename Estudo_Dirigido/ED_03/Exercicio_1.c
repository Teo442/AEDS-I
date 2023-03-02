#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    /*ler dois valores reais para definir um intervalo fechado;
    - ler certa quantidade de valores reais e
    - contar quantos desses valores estão dentro do intervalo, e quantos estão fora dele. */

    // Limpeza do Terminal
    system("clear||cls");

    float a;
    float b;
    int cont1 = 0;
    int cont2 = 0;
    int n;

    float valor[n];

    //valores de limite dos intervalos
    printf("\n Digite um intervalo real [a b]: ");
    scanf("%f %f", &a, &b);
    
    //quantidade de valores no intervalo
    printf("\n Digite a quantidade de valores no arranjo: ");
    scanf("%d", &n);

    //entrada de valores 
    for (int i = 0; i < n; i++)
    {
        printf("\n Insira o valor [%d]: ");
        scanf("%f", &valor[i]);
    }

    for (int i = 0; i < n; i++)
    {
        //conferir se o valor pertence ao intervalo
        if (valor[i] >= a && valor[i] <= b)
        {
            printf("\n Dentro do intervalo: %.2f", valor[i]);
            cont1++;
        }
        else
        {
            //se o valor não pertence ao intervalo
            printf("\n Fora do intervalo: %.2f", valor[i]);
            cont2++;
        }
    }

    //contar quantos valores estão fora e dentro do intervalo
    printf("\n\n Valores dentro do intervalo: %d", cont1);
    printf("\n Valores fora do intervalo: %d", cont2);
}