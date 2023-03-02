#include <stdio.h>



int main()
{

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    // Limpeza do Terminal
    system("clear||cls");

    /*
    ) Incluir uma função recursiva (Exemplo0615) para
    calcular a soma dos primeiros valores ímpares positivos começando no valor 9.
    Testar essa função para quantidades diferentes.
    */

   int x; 
   int y = 9;
   int soma = 0;

   printf("\n Digite a quantidade de termos: "); 
   scanf("%d", &x);

   recursiva(x, y, soma); 
}

int recursiva(int x, int y, int soma){
    if(x == 0)
    {
        printf("\n %d", soma);
    }
    else
    {
        soma += y; 
        x--;
        y += 2; 
        return recursiva(x, y, soma);
    }
}