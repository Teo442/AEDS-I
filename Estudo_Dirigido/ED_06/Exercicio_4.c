#include <stdio.h>

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system ("clear||cls");
    
    /*
     Incluir um método (Exemplo0714) para
    ler um valor inteiro do teclado e
    gravar essa quantidade em valores decrescentes da sequência: ... 1/256 1/64 1/16 1/4 1.
    */

    FILE *arquivo; 
    int n; 
    int multiplo = 1; 

    printf("\n Digite a quantidade de numeros a serem armazenados no arquivo: ");
    scanf("%d", &n);

    arquivo = fopen("ED04.txt", "w");

    /*for(int i = 1; i <= n; i++)
    {
        multiplo = multiplo * 4;
    }
    */

    multiplo = pow(4, n);

    for(int j = n; j >= 0; j--)
    {
        if(multiplo == 1)
        {
            fprintf(arquivo, "%d ", multiplo);
        }
        else 
        {
            fprintf(arquivo, "1/%d ", multiplo);
            multiplo = (multiplo / 4);
        }
    }

    fclose(arquivo);
}