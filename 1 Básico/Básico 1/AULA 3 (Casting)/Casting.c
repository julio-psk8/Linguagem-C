/* ============================================================================
Autor: Julio                                 
Módulo 1 Aula 3
Titulo: Casting

/* ========================================================================= */

/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  char ch = 10;
  int i = 4;
  float f = 1.5;
  double d = 4.88, res;
  
  res = ((float)ch/(float)i) + (f*d) - (f+i);
  printf("res = %.2f\n", res);

  system("PAUSE");
  return 0;                                      /* retorna 0, se main for executada corretamente */
} /* end main */

