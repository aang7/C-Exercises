#include<stdio.h>
#define MAXSIZE 1000

int getLine(char s[], int len);

void copyTo(char to[], char from[]);

int main(){

  char bufferLine[MAXSIZE];
  char longestLine[MAXSIZE];
  
  int longitud;
  int max = 0;
  while((longitud = getLine(bufferLine, MAXSIZE)) > 0){
    if(longitud > max){
      max = longitud; //Almaceno la cantidad maxima de caracteres
      copyTo(longestLine, bufferLine);
    }
    
  }

  printf("\n\nLinea mas larga: \n\n %s \n\n", longestLine);
  printf("Cantidad de carcateres: %d", max);
    
  return 0;
}//ends main

/* Process one line */
int getLine(char s[], int len){
  int i, c;

  for (i = 0; i < len -1 && ((c = getchar()) != EOF) && c != '\n'; ++i)
    s[i] = c;

  if (s[i] == '\n'){
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i; //contador de caracteres
}

/* Copy one buffer to another */
void copyTo(char to[], char from[]){
  int i = 0;
  while(from[i] != '\0'){
    to[i] =  from[i];
    i++;
  }
}
