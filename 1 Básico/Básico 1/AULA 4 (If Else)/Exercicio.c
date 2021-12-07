/* ============================================================================
Autor: Julio                                 
Módulo 1 Aula 5
Titulo: Escreva um software em C que peça ao usuário para fornecer dois valores
inteiros e o programa irá imprimir esses valores na tela, informando se são
iguais ou diferentes.

/* ========================================================================= */

/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  int num1 = 0.0, num2 = 0.0;
  
  printf("digite o primeiro numero: ");
  scanf("%d", &num1);
  
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);
  
  if(num1 == num2)
    printf("os numeros sao iguais\n ");
  
  else
   printf("os numeros sao diferentes\n ");
  
  system("PAUSE");
  return 0;                                      /* retorna 0, se main for executada corretamente */
} /* end main */


/* ============================================================================  
                   
============================================================================ */
/* --- Final do Programa --- */
