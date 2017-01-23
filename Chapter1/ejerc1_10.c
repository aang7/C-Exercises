/*Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t , each
  backspace by \b , and each backslash by \\ . This makes tabs and backspaces visible in an
  unambiguous way.

  Abel Abner 04/11/16
  Excercises from the book: The Language of programming C
  Page 21
 */

#include<stdio.h>


int main(){
  int c;
 
  while((c = getchar()) != EOF){

    if(c == '\t')
      printf("\\t");
    else if(c == '\b')
      printf("b");
    else if(c == '\\')
      printf("\\");
    else
      putchar(c);
  }
  
  return 0;
}
