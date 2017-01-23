/* Exercise 1-23. Write a program to remove all comments from a C program. Don't forget to 
   handle quoted strings and character constants properly. C comments don't nest.
   Author: Abel Abner
*/

#include<stdio.h>
#define INSC 1 //in short comment
#define OUT 0 //out of comments
#define INLC 2 //in large comment

int main(){
  int c, state = OUT; //state -> IN or OUT a comment
  while((c = getchar()) != EOF){
    if(c == '/'){
      c = getchar();
      if(c == '/')
	state = INSC; //Inside comment
      else if(c == '*')
	state = INLC;
    }
    else if(state){
      if(c == '*'){
	c = getchar();
	if(c == '/'){
	  state = OUT; //Outside comment
	  c = getchar(); //next char
	}
      }
      else if(c == '\n' && state == INSC)
	state = OUT;
    }
    
    if(!state)
      putchar(c);
  }

  return 0;
}
