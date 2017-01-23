#include<stdio.h>

//Imprimir farenheit celsisus-inverso

main(){

  int fahr;
  for(fahr=300;fahr>=0;fahr=fahr-20) //Tener cuidado con las condiciones de "mientras" y el "decremento"
      printf("\n %6d \t %6.0f \n", fahr, (5.0/9.0)*(fahr-32));
  
 
getchar();
 
}
