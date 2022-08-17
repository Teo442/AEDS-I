#include <stdio.h>

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system ("clear||cls");
    
    /*
   Fazer um programa (Exemplo0118) para:
    - definir e ler três valores reais do teclado;
    - supor que esses valores correspondam ao comprimento, à largura e à altura
     de um paralelepípedo, respectivamente,
    calcular e mostrar o volume do sólido com sete vezes esses valores.
    */

   //declaração das variáveis 

   float comprimento; 
   float altura; 
   float largura; 
   float volume; 

   //declaração do programa

   printf("\n Esse programa ira apresentar o volume de um paralelepípedo com comprimento, altura e largura iguais a 7x os valores lidos \n\n");

   //armazenamento dos valores lidos

   printf("\n\n Digite o valor inteiro da Altura: "); 
   scanf("%f", &altura);

   printf("\n Digite o valor inteiro do Comprimento: "); 
   scanf("%f", &comprimento);

   printf("\n Digite o valor inteiro da Largura: "); 
   scanf("%f", &largura);

   //operação para encontrar 7x os valores

   altura = altura*7; 
   comprimento = comprimento*7; 
   largura = largura*7;

   //operação para obter o volume do sólido

   volume = (largura*altura)*comprimento; 

   //exibição do resultado

  printf("\n\n O volume do paralelepípedo é de %.2f", volume);

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