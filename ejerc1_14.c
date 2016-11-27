/* Exercise 1-14 chapter1
   Autor: Abel Abner -- aang
*/

#include<stdio.h>
#define CHARSNUMBER 255


int main(){
  int c, i;
  int charsArray[CHARSNUMBER];

  for (i = 0; i < CHARSNUMBER; ++i)
    charsArray[i] = 0;
  
  while((c = getchar()) != EOF)
    ++charsArray[c]; //Con el codigo ASCII puedo ir identificando


  printf("\n %s | %s", "Caracter", "Repeticiones");
  for (i = 0; i < CHARSNUMBER; ++i)
    {
      if(charsArray[i] != 0)//Si la casilla no esta vacia
	printf("\n\t%c : %d", i, charsArray[i]); //Imprime
    }
  
  return 0;
}
