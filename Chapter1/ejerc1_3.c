/*  ACTIVIDAD 6
Ejercicio_1   ---usando While----
Conversiones Farenheit a Centigrados
Abel Abner Nolasco Guitian
*/

#include<stdio.h>

main(){

  float menor,mayor,incre;
  float fahr,celsius;

  menor=0;
  mayor=300;
  incre=20;
  
  printf("\n\t\t Farenheit \t   Celsius \n\n");

  while(menor <= mayor){
    fahr=menor;
    celsius=(fahr-32)/1.8;
    
    printf("\n\t\t %6.2f f° \t %6.2f c° \n", fahr, celsius);
    
    menor=menor+incre;
  }

  getchar();

}
