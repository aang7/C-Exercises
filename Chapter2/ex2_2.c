//Exercise 2-2. Write a loop equivalent to the for loop above without using && or || .
/*  for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
    s[i] = c;
*/

//Author: AANG 

#include<stdio.h>


int getLine(char buffer[], int lim );

enum constante {LIMITE = 1000};

int main(){

  char buffer[LIMITE];

  while (getLine(buffer, LIMITE)) {
    printf("%s", buffer);
  }


  

  return 0;
}

int getLine(char buffer[], int lim){

  int i, c;
  for ( i = 0; i < LIMITE; ++i)
    {
      c = getchar();
      if (c == '\n')
	break;

      if (c == EOF)
	break;
      
      buffer[i] = c;
    }

   if (c == '\n') {
    buffer[i] = c;
    ++i;
  }
   
   buffer[i] = '\0';
   
  return i;
}
