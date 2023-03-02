#include <stdio.h>

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system ("clear||cls");
    
    /*
     Incluir um método (Exemplo0711) para
    ler um valor inteiro do teclado e
    gravar essa quantidade em múltiplos de 5, ímpares, em ordem crescente, começando em 5.
    */

    FILE *arquivo; 
    int n; 
    int multiplo = 5; 

    printf("\n Quantidade de valores inteiros a serem salvos nos arquivos: ");
    scanf("%d", &n);

    arquivo = fopen("EX01.txt", "w");

    for(int i = 1; i <= n; i++)
    {
        fprintf(arquivo, "%d ", multiplo);
        multiplo += 10; 
    }

    fclose(arquivo);
}
