/*  Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and
    to delete entirely blank lines.
    Author: Abel Abner
    26/11/16
*/

#include<stdio.h>
#define LINEMAXLEN 1000

int getLine(char s[], int longest);
void copyTo(char to[], char from[]);

int main(){
  int len = 0;
  char bufferLine[LINEMAXLEN];
  
  while((len = getLine(bufferLine, LINEMAXLEN)) > 0)
    if (bufferLine[0] != '\n')
      printf("%s", bufferLine);
    
  return 0;
}

int getLine(char s[], int lim){
  int i, c;

  for(i = 0; (i < lim - 1) && ((c = getchar()) != EOF); ++i){
    s[i] = c;

    if (c == '\n')
      break;
     
    if(c == ' ' || c == '\t')
      --i;
  }

  /* this "if" is active in all the function */
  if(s[i] == '\n'){
    s[i] = c; //same
    i++;//for the null Character
  }
  
  s[i] = '\0';
  
  return i;
}

/* I'm not using this */
void copyTo(char to[], char from[]){
  int i;
  for(i = 0; from[i] != '\0'; i++)
    to[i] = from[i];
}

