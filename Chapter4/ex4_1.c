/* Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost
occurrence of t in s , or -1 if there is none
Abel Abner 11/06/17 */

#include <stdio.h>
#include<string.h>
#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int max);
int strindex(char source[], char searchfor[]);
char pattern[] = "ould"; /* pattern to search for */

/* find all lines matching pattern */
int main()
{
  char line[MAXLINE];
  int found = 0, index;
  while (getLine(line, MAXLINE) > 0)
    if ((index = strindex(line, pattern)) >= 0) {
      printf("%s", line);
      found++;
    }

  printf ("\n 0blines founded with the pattern: %d\n index of the rightmost pattern: %d\n",
	  found, index);
  
  return found;
}

/* getLine: get line into s, return length */
int getLine(char s[], int lim)
{
  int c, i;
  i = 0;

  while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
    s[i++] = c;

  if (c == '\n')
    s[i++] = c;

  s[i] = '\0';

  return i;
}

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[])
{
  int i, j, k;

  char g = t[0];
  for (i = (strlen(s) - 1); i >= 0; i--) {
    for (j=i, k = strlen(t)-1; k != 0 && s[j] == t[k]; j--, k--)
      ;

    if (k == 0 && t[k] == g)
      return i;
  }
  
  return -1;
}
