/* Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print the
 length of arbitrary long input lines, and as much as possible of the text.

 Author:Abel Abner 26/11/16
*/

#include <stdio.h>
#define MAXLINE 1000


int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  int len;
  int max;

  char line[MAXLINE];
  char longest[MAXLINE];

  /* current input line */
  /* longest line saved here */
  max = 0;
  while (((len = getLine(line, MAXLINE)) > 0) && (len < MAXLINE))
      if (len > max) {
	max = len;
	copy(longest, line);
      }
      if (max > 0) /* there was a line */
	  printf("%s", longest);
	

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


/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
