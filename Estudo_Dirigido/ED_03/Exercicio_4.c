#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mostraString(char cadeia[]);

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    /*- ler uma sequência de caracteres do teclado;
    - mostrar as letras maiúsculas maiores que 'J' separadas por uma função 
     definida para receber uma cadeia de caracteres como parâmetro */

    // Limpeza do Terminal
    system("clear||cls");

    char cadeia[20];

    printf("\n Digite aqui a cadeia de caracteres: ");
    scanf("%s", &cadeia);

    mostraString(cadeia);
}

int mostraString(char cadeia[]){
    for(int i = 0; i <= 20; i++)
    {
        if(cadeia[i] >= 'J' && cadeia[i] <= 'Z')
        {
            printf("\n Maiuscula: %c", cadeia[i]);
        }
    }
}