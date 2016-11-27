/*  Exercise 1-19. Write a function reverse(s) that reverses the character string s . Use it to
    write a program that reverses its input a line at a time.
    Author: Abel Abner
    26/11/16
*/

#include<stdio.h>
#define LINEMAXLEN 10000

int getLine(char s[], int len);
void reverse(char s[]);

int main()
{
  int len;
  char bufferLine[LINEMAXLEN];
  
  while((len = getLine(bufferLine, LINEMAXLEN)) > 0){
    reverse(bufferLine);
    printf("%s", bufferLine);
  }
  
  return 0;
}

int getLine(char s[], int longest){
  int c, i;
  
  for (i = 0; (i < longest - 1) && ((c = getchar()) != EOF); ++i)
    {
      
      s[i] = c;
      if(c == '\n')
	break;
    } 

  if(s[i] == '\n'){
    s[i] = c;
    i++;
  }
  
  s[i] = '\0';
  
  return i;
}

void reverse(char s[]){
  char copyBuffer[LINEMAXLEN];
  int i;
  
  for(i = 0; s[i] != '\0'; i++)
    copyBuffer[i] = s[i];
  
  if(copyBuffer[i] == '\n')
    copyBuffer[++i] = '\0';
  
  int j = 0; //It's important initialize to 0
  for(i -= 1; i >= 0; --i)
    s[j++] = copyBuffer[i]; //Iḿ not sure if this will work
  
  if(s[j] == '\n')
    j++;
  
  s[j] = '\0';

}
