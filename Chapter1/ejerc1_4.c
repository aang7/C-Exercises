#include<stdio.h>

main(){

  float menor,limite,op,celsius,fahr;


  printf("\n\t\t Celsius \t Farenheit\n\n");
  
  while(menor <= limite){
    menor=0;
  limite=300;
    


	 celsius=menor;
	 fahr=(celsius*1.8) + 32;
	 printf("\t\t %6.0f °c \t %6.0f °f\n", celsius, fahr);
	
	 menor=celsius+20;

  }

  getchar();
}	 
   
