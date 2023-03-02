#include <stdio.h>

int recursiva(int x, int y, int multiplos);

int main()
{

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    // Limpeza do Terminal
    system("clear||cls");

    /*
     Incluir um método recursivo (Exemplo0612) para
    ler um valor inteiro do teclado e chamar procedimento recursivo para
    mostrar essa quantidade em múltiplos de 9 em ordem decrescente encerrando no valor 9
    */

    int x = 9;
    int multiplos;
    int y;

    printf("\n Digite a quantidade de valores: ");
    scanf("%i", &y);

    recursiva(x, y, multiplos);
}

int recursiva(int x, int y, int multiplos)
{

    if (multiplos >= 9)
    {
        multiplos = x * y;
        printf("\n %i", multiplos);
        y -= 1;
        return recursiva(x, y, multiplos);
    }
}