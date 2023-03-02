#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    // Limpeza do Terminal
    system("clear||cls");

    /*
    Incluir um método (Exemplo0715) para
    ler um valor inteiro do teclado (n) e outro valor real (x),
    gravar essa quantidade (n) em valores reais da sequência: 1 1/x1 1/x3 1/x5
    ...
    DICA: Usar pow ( x, y ) da biblioteca <math.h> para calcular a potência.
    */

    FILE *arquivo;
    int n = 0;
    float x;
    float y = 1;
    bool cond = true;

    do
    {
        printf("\n Digite a quantidade de valores a serem gravados no arquivo: ");
        scanf("%d", &n);
        if (x <= 0)
        {
            printf("\n Valor deve ser positivo.");
        }
    } while (n <= 0);

    if (n > 0)
    {
        while (cond == true)
        {

            printf("\n Digite o valor de X: ");
            scanf("%f", &x);

            if (x = 0)
            {
                printf("\n Valor de X invalido, digite novamente.");
            }
            else cond = false;
        }

        arquivo = fopen("ED05.txt", "w");

        fprintf(arquivo, "1 ");

        for (int i = 1; i <= n; i++)
        {
            float result = pow(x, y);
            fprintf(arquivo, "1/%f ", result);
            y += 2;
        }

        fclose(arquivo);
    }
}