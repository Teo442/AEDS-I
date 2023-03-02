#include <stdio.h>

void imprimeString(char *cadeia[], char x, int a); 

int main()
{

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    // Limpeza do Terminal
    system("clear||cls");

    /*
    Incluir um método recursivo (Exemplo0617) para
    ler uma cadeia de caracteres e chamar procedimento recursivo para
    mostrar cada símbolo separadamente, um por linha.

    */
   
   int a = 0; 
   char cadeia[100];
   char x = cadeia[a]; 
 
   printf("\n Digite os termos da sequencia: ");
   scanf("%s", &cadeia);
   
   imprimeString(cadeia, x, a);
}

void imprimeString(char *cadeia[], char x, int a){
    if(x == cadeia[100])
    {
        printf("%c", x);
    }
    else
    {
        printf("%c", x);
        a += 1;
        return imprimeString(cadeia, x, a);
    }
}