#include <stdio.h>

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system ("clear||cls");
    
    /*
     Incluir um método (Exemplo0712) para
    ler um valor inteiro do teclado e
    gravar essa quantidade em múltiplos de 7, pares , em ordem decrescente encerrando em 14.
    */

    FILE *arquivo; 
    int n; 
    int multiplo; 

    printf("\n Quantidade de valores inteiros a serem salvos nos arquivos: ");
    scanf("%d", &n);

    multiplo = 7 * n; 

    arquivo = fopen("EX02.txt", "w");

    for(int i = n; i >= 1; i--)
    {
        if(multiplo % 2 == 0)
        {
            fprintf(arquivo, "%d ", multiplo);
        }

        multiplo -= 7; 
    }

    fclose(arquivo);
}
