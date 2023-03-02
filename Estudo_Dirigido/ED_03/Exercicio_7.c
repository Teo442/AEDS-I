#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mostraPar(char cadeia[]);

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    /*- ler uma sequência de caracteres do teclado;
    - mostrar a quantidade de dígitos pares em uma cadeia de caracteres contados por uma função
    definida para receber uma cadeia de caracteres como parâmetro.
    DICA: Considerar o valor inteiro do código equivalente (type casting) para teste.
 */

    // Limpeza do Terminal
    system("clear||cls");

    char cadeia[20];

    printf("\n Insira uma cadeia de caracteres: ");
    scanf("%s", cadeia);

    int cont = mostraPar(cadeia);

    printf("\n Quantidade de digitos pares: %d", cont);
}

int mostraPar(char cadeia[]){
    int cont = 0; 
    for(int i = 0; i <= 20; i++)
    {
    if (cadeia[i] >= '0' && cadeia[i] <= '9') 
        {   
            if(cadeia[i] % 2 == 0)
            {
                cont++;
            }
        }
    }
    return cont;
}