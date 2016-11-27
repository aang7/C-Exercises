/* Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter?
Author: Abel Abner 26/11/16
*/
#include<stdio.h>
#define NCOLUMNS 8 //1Tab  = 8spaces
#define MAXLEN 1000

int getLine(char s[],int lim);
void detab(char s[], char o[]);

int main(){
  char bufferLine[MAXLEN];
  char detabuffer[MAXLEN];
  while(getLine(bufferLine, MAXLEN)){
    detab(bufferLine, detabuffer);
    printf ("%s",detabuffer);
  }

  return 0;
}


int getLine(char s[],int lim)
{
  int c, i;

  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void detab(char source[], char output[]){
  int i, j = 0;
  
  for(i = 0; source[i] != '\0'; i++){
    
    if(source[i] != '\t')
      output[j++] = source[i];
    
    else{
      if(source[i] == '\t' ){
	int spaces = NCOLUMNS-(j%NCOLUMNS);
	while(spaces-- > 0)
	  output[j++] = '_'; //To see the blanks
      }
    }
  }
  
  if(output[j] == '\n')
    j++;

  output[j] = '\0';
  
}


/* A tab character should advance to the next tab stop. Historically tab stops were every 8th character, although smaller values are in common use today and most editors can be configured.

I would expect your output to look like the following:

123456789
a       b
        c
The algorithm is to start a column count at zero, then increment it for each character output. When you get to a tab, output n-(c%n) spaces where c is the column number (zero based) and n is the tab spacing.*/
