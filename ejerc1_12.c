/* Exercise 1-12. Write a program that prints its input one word per line.
   Abel Abner
 */

#include<stdio.h>
#define IN 1
#define OUT 0

int main(){
  int c;
  int state = IN;
  
  while((c = getchar()) != EOF){
    if(c == ' ' || c == '\t' || c == '\n')
      state = OUT;
    else if(!state){
      putchar('\n');
      state = IN;
    }
    
    if(state == IN)
      putchar(c);
    
    
  }

  return 0;
}
