/* ============================================================================
Autor: Julio                                 
M�dulo 1 Aula 4
Titulo: Escreva um programa em C que solicite ao usu�rio para entrar com um
n�mero inteiro de minutos e o valor seja convertido para horas, imprimir este
resultado com 2 casas de precis�o.

/* ========================================================================= */

/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Fun��o Principal --- */
main()
{
  int min = 0.0;
  float horas = 0.0;
  printf("Digete um  valor em minutos: ");
  scanf("%d", &min);
  
  horas = ((float) min / 60 );
  
  printf("%d minutos sao: %.2f Horas\n", min,horas);
  
  
  
  system("PAUSE");
  return 0;                                      /* retorna 0, se main for executada corretamente */
} /* end main */


/* ============================================================================  
                   
============================================================================ */
/* --- Final do Programa --- */
