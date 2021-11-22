/* ============================================================================
Autor: Julio                                 
Módulo 1 Aula 3
Titulo: Calculo do volume do cilindro

/* ========================================================================= */

/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  float pi=3.141592, r =0.0, h=0.0, v=0.0;
  
  printf("digite o Raio do cilindro em metros: ");
  scanf ("%f", &r);
  printf("digite a altura do cilindro em metros: ");
  scanf ("%f", &h);
  
  v=pi*r*r*h;
  printf("O volume do ciliundro = %.2f metros cubicos\n", v);
  
  
  
  system("PAUSE");
  return 0;                                      /* retorna 0, se main for executada corretamente */
} /* end main */


/* ============================================================================  
                                                              
                                       _                      
                                      / \                     
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\_______________________________
                                                              
                                                              
============================================================================ */
/* --- Final do Programa --- */
