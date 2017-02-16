/* Exercise 2-10. Rewrite the function lower , which converts upper case letters to lower case,
   with a conditional expression instead of if-else.
   Abel Abner 14/02/17
*/
#include<stdio.h>

int lower(unsigned char);

int main()
{
  printf ("%c\n", lower('A'));
  return 0;
}

int lower(unsigned char character){
  return (character >= 'A' && character <= 'Z') ? character + 'a' - 'A' : character;
}
