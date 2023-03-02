#include <stdio.h>

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system ("clear||cls");
    
    /*
    Incluir um método (Exemplo0713) para
    ler um valor inteiro do teclado e
    gravar essa quantidade em valores da sequência: 1 3 9 27 81 ..
    */

    FILE *arquivo; 
    int n; 
    int multiplo = 1; 

    printf("\n Digite a quantidade de numeros a serem armazenados no arquivo: ");
    scanf("%d", &n);

    arquivo = fopen("ED03.txt", "w");

    for(int i = 1; i <= n; i++)
    {
        fprintf(arquivo, "%d ", multiplo);
        multiplo = multiplo * 3;
    }

    fclose(arquivo); 
}