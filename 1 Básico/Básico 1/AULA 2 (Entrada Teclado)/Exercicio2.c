/* ============================================================================
Autor: Julio                                 
Módulo 1 Aula 3

Titulo: 
        
        Escreva um programa em C que solicite ao usuário o valor de temperatura em
°C e o software imprima na tela o valor desta temperatura em ºF.

/* ========================================================================= */

/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  float Tc = 0.0, Tf = 0.0;
  printf("Digite uma temperatura em Graus Cesius: ");
  scanf ("%f", &Tc);
  
  Tf= (1.8 * Tc) + 32;
  
  printf("A temperatura em fahrenheit e = %.2f\n", Tf);
  
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
