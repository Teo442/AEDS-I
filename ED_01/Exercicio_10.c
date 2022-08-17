#include <stdio.h> 
#include <math.h> 
#define M_PI  3.141592653589793

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system("clear||cls");

    /*
    Fazer um programa para:
    - definir e ler um valor real do teclado;
    - supor que esse valor represente o raio de uma esfera,
     calcular e mostrar o volume de uma esfera com cinco oitavos do raio.
    DICA: Usar constantes reais em expressões que envolvam valores reais
    */ 

   //declaração das variáveis

    float raio; 
    float volume; 

    //declaração do programa 

    printf("\n Este programa ira calcular o volume de uma esfera com raio igual a 5/8 do valor lido. \n\n");

    //armazenamento da variavel 

    printf("\n\n Digite o tamanho do raio da esfera: ");
    scanf("%f", &raio);

    //calculo de 5/8 do raio

    raio = (raio/8)*5; 
    
    //raio ao cubo

    raio = raio*(raio*raio);

    //calculo da area do circulo 

    volume = (4*(M_PI*raio))/3; 

    //exibição do resultado 

    printf("\n\n O volume da esfera eh igual a %.2f", volume); 

    //término do programa
    printf("\n\n Fim do programa \n");

    return 0; 

    /*
    ---------------------------------------------- documentacao complementar
    ---------------------------------------------- notas / observacoes / comentarios
    ---------------------------------------------- previsao de testes
    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 08/08 esboco
    0.2 09/08 versão final 
    ---------------------------------------------- testes
    Versao Teste
    0.1 01. ( OK ) identificacao de programa
    */
}