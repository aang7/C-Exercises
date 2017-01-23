/* Exercise 1-33 chappter 1
   Autor: Abel Abner - aang
*/
#include<stdio.h>
#define IN 1
#define OUT 0
#define MAXLENGHT 20

int main(){

  int c, i, k, state, chars;
  int ncharsInside[MAXLENGHT];
  state = IN;
  chars = 0;

  //Inicializando array
  for(i = 0; i < MAXLENGHT; i++)
    ncharsInside[i] = 0;

  //Put some words - For end the program press Ctrl-D
  while((c = getchar()) != EOF){

    if( c == ' ' || c == '\t' || c == '\n'){
      state = OUT;
      if(chars != 0){
	++ncharsInside[chars-1]; //desde 1 hasta lo que vale chars
	chars = 0;
      }
    }
    //I had been outside a word?
    else if(!state){
      chars = 0;
      putchar(' '); //Para la ver la salida con un solo espacio
      state = IN;
    }
    
    if(state){
      chars++;      
      putchar(c);
    }
    
  }
  //Print Results
  printf("\n%2s | %2s", "Longitud", "Histograma");
  for(i = 0; i < MAXLENGHT; i++){
    printf("\n%7d\t | ", i+1);
    for(k = 0; k < ncharsInside[i]; k++)
      printf("= ");
  }
  return 0;
}
