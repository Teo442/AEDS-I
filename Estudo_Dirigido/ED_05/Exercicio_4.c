#include <stdio.h>

int recursiva(int x, int y, int multiplos, int a);

int main()
{

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    // Limpeza do Terminal
    system("clear||cls");

    /*
    Incluir um método recursivo (Exemplo0614) para
    ler um valor inteiro do teclado e chamar procedimento recursivo para
    mostrar essa quantidade em valores decrescentes da sequência: ... 1/6561 1/729 1/81 1/9 1.
    */

    int x;
    int y = 9;
    int multiplos; 
    int a = 0;

    printf("\n Digite a quantidade de termos para a repeticao: ");
    scanf("%i", &x);

    recursividade(x, y, multiplos, a);
}

int recursividade(int x, int y, int multiplos, int a){
    if(x == 0)
    {
        printf("\n 1");
    }
    else
    {
        multiplos = x * y; 
        a += multiplos;
        printf("\n 1/%d", a); 
        x--; 
        return recursividade(x, y, multiplos, a);
    }
}