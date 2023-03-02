#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int mostraAlfanumerico(char cadeia[]);

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    /*- ler certa quantidade de cadeias de caracteres do teclado, uma por vez;
    - mostrar e contar a quantidade de símbolos alfanuméricos (letras e dígitos) em cada palavra, 
    por meio de uma função, e calcular o total acumulado de todas as palavras.
 */

    // Limpeza do Terminal
    system("clear||cls");

    char cadeia[100];
    char op; 
    bool continuar = true; 
    int palavras = 0; 


    while(continuar)
    {
    printf("\n 1. Inserir cadeia de caracteres.");
    printf("\n 2. Ver quantidade de simbolos alfanumericos."); 
    printf("\n 3. Ver quantidade de palavras inseridas.");

    printf("\n Escolha sua opcao: ");
    scanf("%c", op);

        switch(op)
        {
            case '1': 
            palavras++;
            printf("\n Insira uma cadeia de caracteres: "); 
            scanf("%s", &cadeia);
            break; 

            case '2':
            mostraAlfanumerico(cadeia);
            int cont = mostraAlfanumerico(cadeia);
            printf("\n Quantidade total de letras e numeros: %d", cont);

            case '3':
            printf("\n Quantidade total de palavras inseridas: %d", palavras);
        }
    }
}

int mostraAlfanumerico(char cadeia[]){
    int cont = 0; 
    for(int i = 0; i <= 20; i++)
    {
        if((cadeia[i] >= 'A' && cadeia[i] <= 'Z') && (cadeia[i] >= 'a' && cadeia[i] <= 'z') && (cadeia[i] >= '0' && cadeia[i] <= '9'))
        {
            printf("\n Simbolo: %c", cadeia[i]);
            cont++;
        }
    }
    return cont; 
}
