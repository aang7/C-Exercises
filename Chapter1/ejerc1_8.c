#include<stdio.h>
/* Calcular el total de lineas(\n), espacios y tabuladores  
Abel Abner Nolasco guitian  */



main(){

int c,nl=0,t=0,espa=0;  

 while((c = getchar()) != EOF) // Cuidado con los parentesis
 {


    if(c == '\n'){
    nl=nl+1;
    }
    if(c == '\t'){
     t=t+1;
    }
	
    if(c == ' '){
	espa=espa+1;
      }
	
  }
  printf("\n El total de lineas es: %d \n", nl);
  printf("\n El total de tabuladores es: %d \n", t);
  printf("\n El total de espacios es: %d \n", espa);

}
