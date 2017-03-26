/* Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into
   visible escape sequences like \n and \t as it copies the string t to s . Use a switch . Write a
   function for the other direction as well, converting escape sequences into the real characters.

   Abel Abner 25/03/17 God is Love
*/

#include<stdio.h>

#define SIZE 1000

void escape(char * s, char *t);
void inverse(char *u, char* s);

int main()
{

  char texto[SIZE];
  char newText[SIZE];
  char inversa[SIZE];
  int c, i = 0;
  while((c = getchar()) != EOF)
    texto[i++] = c;
  
  escape(newText, texto);
  printf("\n%s\n", newText);

  inverse(inversa, newText);
  printf ("\n%s\n", inversa);
  
  return 0;
}

void escape(char * s, char *t){
  int i = 0, j = 0;
  
  while(t[i] != '\0')
    {
      switch(t[i])
	{
	case '\n':
	  s[j++] = '\\' ;
	  s[j++] = 'n';
	  break;
	  
	case '\t': 
	  s[j++] = '\\';
	  s[j++] = 't';
	  break;

	default:
	  s[j++] = t[i];
	  break;
	}
      i++;
    }

  if (t[i] == '\0')
    s[j++] = '\0';
    
}

void inverse(char *u, char* s){
  int i = 0, j = 0;
  
  while(s[i] != '\0')
    {
      switch(s[i])
	{
	case '\\':
	  if (s[++i] == 't')
	    u[j++] = '\t';
	  else if (s[i] == 'n')
	    u[j++] = '\n';
	  break;
	default:
	  u[j++] = s[i];
	  break;
	}
      i++;
    }

  if (s[i] == '\0')
    u[j++] = '\0';
  
}
