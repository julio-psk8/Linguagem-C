/* ============================================================================
Autor: Julio                                 
Módulo 1 Aula 3

Titulo: 
        
        Escreve um programa em C que solicite ao usuário a entrada de dois números
reais e o programa calcule e mostre no console o resultado da subtração,
multiplicação e divisão destes dois números.

/* ========================================================================= */

/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  float num1= 0.0, num2= 0.0, div=0.0, mult=0.0, sub=0.0, ad=0.0;
  
  printf("digite um numero: ");
  scanf ("%f", &num1);
  printf("digite outro numero: ");
  scanf ("%f", &num2);
  
  div  = num1 / num2;
  mult = num1 * num2;
  sub  = num1 - num2;
  ad   = num1 + num2;
  
  printf("DIVISAO = %.2f\n", div);
  printf("MULTIPLICACAO = %.2f\n", mult);
  printf("SUBTRACAO = %.2f\n", sub);
  printf("ADCAO = %.2f\n", ad);
  
  
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
