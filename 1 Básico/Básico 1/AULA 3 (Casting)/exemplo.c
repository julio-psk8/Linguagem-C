/* ============================================================================
Autor: Julio                                 
Módulo 1 Aula 3
Titulo: Este programa lê a tensão de um conversor analógico/digital de 0 a 5V e 10
bits e imprime no console:

/* ========================================================================= */

/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  int val_ADC;
  float volts;
  
  printf("Inserir um valor de ADC entre 0 e 1023: ");
  scanf("%d",&val_ADC);
  
  volts = (float)(val_ADC*5.0/1023.0);
  printf("A tensao lida foi: %.2fV\n", volts);
  
  system("PAUSE");
  return 0;                                      /* retorna 0, se main for executada corretamente */
} /* end main */

