/* Exercise 1-22. Write a program to ``fold'' long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs
before the specified column.
Author: Abel Abner 27/11/16
*/
#include<stdio.h>

#define MAXLEN 1000
#define LPOSITION 50 //When the line is long?

void splitLine(int position, char bufferLine[]);
int getLine(char bufferLine[], int len);

int main(){
  char bufferLine[MAXLEN];
  
  while(getLine(bufferLine, MAXLEN))
    printf("%s", bufferLine);
  
  return 0;
}

//Read line at a time
int getLine(char s[],int len)
{
  int c, i, j = 0;
  
  for (i=0; i < len-1 && (c=getchar()) != EOF && (c != '\n'); ++i){
    
    if((++j >= LPOSITION) && (c == ' ' || c == '\t')){
      splitLine(i, s); //Function body below
      s[++i] = c;
      j = 0;
      continue;
    }
    
    s[i] = c;
  }
  
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  
  s[i] = '\0';
  
  return i;
}


void splitLine(int position, char bufferLine[]){
  bufferLine[position] = '\n';
}
