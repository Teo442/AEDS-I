#include <stdio.h>

int recursiva(int x, int y);

int main()
{

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    // Limpeza do Terminal
    system("clear||cls");

    /*
    Incluir um método recursivo (Exemplo0613) para
    ler um valor inteiro do teclado e chamar procedimento recursivo para
    mostrar essa quantidade em valores da sequência: 1 9 18 27 36 ...
    */

   int x; 
   int y = 0; 

   printf("\n Digite a quantidade de valores da sequencia: "); 
   scanf("%i", &x);

   printf("\n 1");

   recursiva(x, y);
}

int recursiva(int x, int y){
    if(x == 0)
    {
        printf("\n ");
    }
    else
    {
        y += 9; 
        x--; 
        printf("\n %i", y);
        return recursiva(x, y);
    }
}
