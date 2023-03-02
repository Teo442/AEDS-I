#include <stdio.h>

int recursiva(int x, int y);

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system ("clear||cls");
    
    /*
     Incluir um método recursivo (Exemplo0611) para
    ler um valor inteiro do teclado e chamar procedimento recursivo para
    mostrar essa quantidade em valores ímpares em ordem crescente começando no valor 9
    */

    int x = 9;
    int y; 

    printf("\n Digite a quantidade de repeticoes: ");
    scanf("%i", &y);

    recursiva(x, y);
}

int recursiva(int x, int y){
    if(y == 0)
    {
        printf("\n %i", x); 
    }
    else
    {
        printf("\n %i", x);
        x += 2; 
        y -= 1; 
        return recursiva(x, y);
    }
}