#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mostraLetraDigito(char cadeia[]);

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    /*- ler uma sequência de caracteres do teclado;
    - mostrar todos os símbolos alfanuméricos (letras e dígitos) em uma cadeia de caracteres 
    separados por meio de uma função.
 */

    // Limpeza do Terminal
    system("clear||cls");

    char cadeia[20];

    printf("\n Insira a cadeia de caracteres: ");
    scanf("%s", &cadeia);

    mostraLetraDigito(cadeia);

}

int mostraLetraDigito(char cadeia[]){
    for(int i = 0; i <= 20; i++)
    {
        if((cadeia[i] >= 'A' && cadeia[i] <= 'Z') && (cadeia[i] >= 'a' && cadeia[i] <= 'z') && (cadeia[i] >= '0' && cadeia[i] <= '9'))
        {
            printf("\n Simbolo: %c", cadeia[i]);
        }
    }
}