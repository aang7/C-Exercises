/* Write an alternative version of squeeze(s1,s2) that deletes each character in
   s1 that matches any character in the string s2.
   Author: Aang  20/01/17 */

#include<stdio.h>
#define SIZE 1000

void squeeze(char *, char *);

int main(){
  
  int c, i = 0;
  char string1[SIZE];
  char string2[SIZE];

  /* Llenando primer buffer */
  while((c = getchar()) != EOF)
    string1[i++] = c;

  i = 0; //reseteando variable

  /* Llenando el segundo */
  while((c = getchar()) != EOF)
    string2[i++] = c;

  //do a squeeze :)
  squeeze(string1, string2);

  for(i = 0; i < 5; i++)
    printf("%c", string1[i]);
  
  printf("\nString1:\n%s\n\nString2:\n%s\n", string1, string2);
  return 0;
}


/* borrar cada caracter en s1 que se encuentre en s2 */
void squeeze(char *s1, char *s2){

  int i, j, k;

  for ( i = k = 0; s1[i] != '\0'; ++i)
    {
      //recorriendo segundo string
      for (j = 0;(s1[i] != s2[j]) && s2[j] != '\0'; ++j)
	;
      
      //si termino su recorrido completamente
      if(s2[j] == '\0')
	s1[k++] = s1[i];
	
    }
  
  s1[k] = '\0';
 
  
}
