#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    /*- ler uma sequência de caracteres do teclado;
    - contar e mostrar a quantidade de letras maiúsculas maiores que 'J'.
     DICA: Definir uma função para determinar se um caractere é letra maiúscula.
    */

    // Limpeza do Terminal
    system("clear||cls");

    char cadeia[20];
    int cont = 0;

    printf("\n Digite uma palavra: ");
    scanf("%s", &cadeia);

    for (int i = 0; i <= 20; i++)
    {
        if (cadeia[i] >= 'J' && cadeia[i] <= 'Z')
        {
            printf("\n Maiuscula: %c", cadeia[i]);
            cont++;
        }
    }
    printf("\n Quantidade de caracteres maiores que J: %d", cont);
}