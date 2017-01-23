/* Este es el ejercico en donde me quede, el que tengo no lo hice yo, asi que estoy intentando hacerlos por mi cuenta
   Abel Abner
   Nov 4 2016
   Lenguaje de Programacion C k&R
 */

#include<stdio.h>

int main()
{
  int c;
  int flag = 0;
  while ((c = getchar()) != EOF) {

    if(c == ' ' || c == '\t' || c == '\n')
      flag = 1;
    
    else {
      if(flag){
	putchar(' ');
	flag = 0;
      }
      putchar(c);
      
    }
  }
  

  return 0;
}
