#include <stdio.h>

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
    - supor que esse valor represente a medida de lados de um cubo,
     calcular e mostrar o volume do sólido com um quarto da medida do lado.
    DICA: Usar constantes reais em expressões que envolvam valores reais.
    */

   //declaração das variáveis 

   float lado; 
   float volume; 
   

   //declaração do programa

   printf("\n Esse programa ira apresentar o volume de um cubo com 1/4 da medida de lado do valor lido \n\n");

   //armazenamento do valor Lado

   printf("\n Digite o valor inteiro do Lado: "); 
   scanf("%f", &lado);

   //operação para encontrar 1/4 do lado

   lado = lado/4; 

   //operação para encontrar o volume do cubo

   volume = (lado*lado)*lado; 

   //exibição do resultado

   printf("\n\n O volume do cubo é de %.2f", volume);

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
    0.2 08/08 versão final 
    ---------------------------------------------- testes
    Versao Teste
    0.1 01. ( OK ) identificacao de programa
    */
}