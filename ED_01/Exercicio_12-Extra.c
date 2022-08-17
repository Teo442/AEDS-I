#include <stdio.h>
#include <math.h> 
#define M_PI  3.141592653589793

int main(){

/**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system ("clear||cls");

    
    /*
    Fazer um programa para:
    - definir e ler um valor real do teclado;
    - supor que esse valor represente o volume de uma esfera;
    - calcular e mostrar o raio de um oitavo do volume da esfera e a área de sua superfície.
    DICA: Usar constantes reais em expressões que envolvam valores reais.
    */

   //declaração das variáveis

   int volume; 
   float raio;
   float area; 

   //declaração do programa 

   printf("\n Esse programa ira calcular o raio e a area de uma esfera com base em 1/8 do volume inserido. \n\n");

   //armazenamento da variável 

   printf("\n Digite o valor do volume: "); 
   scanf("%i", &volume); 

   //calculo de 1/8 do volume 

   float volume2 = volume/8; 

   //calculo do raio e da area da superfície

   raio = pow(((4*M_PI)/3)*1/volume2, 1.0/3);
   area = (4*(M_PI*(raio*raio))); 
   
   //exibição do resultado 

   printf("\n\n Com base em 1/8 do volume inserido, o raio seria %.2f e a area %.2f", raio, area); 

   //término do programa 

   printf("\n\n Fim do programa \n");

   /*
    ---------------------------------------------- documentacao complementar
    ---------------------------------------------- notas / observacoes / comentarios
    ---------------------------------------------- previsao de testes
    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 12/08 esboco
    0.2 12/08 versão final 
    ---------------------------------------------- testes
    Versao Teste
    0.1 01. ( OK ) identificacao de programa
    */
}