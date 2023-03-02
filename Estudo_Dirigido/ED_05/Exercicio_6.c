#include <stdio.h>

float recursiva(int x, float y, float z, float soma);

int main()
{

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    // Limpeza do Terminal
    system("clear||cls");

    /*
    Incluir uma função recursiva (Exemplo0616) para
    calcular a soma dos inversos (1/x) dos primeiros valores ímpares positivos começando no valor 9.
    Testar essa função para quantidades diferentes.
    */
   
   int x; 
   float z = 9;
   float y = 1/z;
   float soma = 0;

   printf("\n Digite a quantidade de termos: "); 
   scanf("%d", &x);

   recursiva(x, y, z, soma); 
}
float recursiva(int x, float y, float z, float soma){
    if(x == 0)
    {
        printf("\n %.2f", soma);
    }
    else
    {
        soma += y; 
        x--;
        z += 2; 
        return recursiva(x, y, z, soma);
    }
}