#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countString(char cadeia[]);

int main()
{

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    /*- ler uma sequência de caracteres do teclado;
    - mostrar a quantidade de letras (tanto maiúsculas, quanto minúsculas) maiores que 'J' e 'j'
    contadas por uma função definida para receber uma cadeia de caracteres como parâmetro.
*/

    // Limpeza do Terminal
    system("clear||cls");

    char cadeia[20]; 

    printf("\n Insira aqui a cadeia de caracteres: ");
    scanf("%s", &cadeia);

    int cont = countString(cadeia);

    printf("\n Quantidade de letras maiusculas e minusculas maiores que 'J': %d", cont);
}

int countString(char cadeia[]){
    int cont = 0; 
    for (int i = 0; i <= 20; i++)
    {
        if(cadeia[i] >= 'J' && cadeia[i] <= 'Z')
        {
            cont++; 
        }
        else if(cadeia[i] >= 'j' && cadeia[i] <= 'z')
        {
            cont++;
        }
    }
    return cont; 
}
