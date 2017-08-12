/* Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1
   into the equivalent complete list abc...xyz in s2 . Allow for letters of either case
   and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z . Arrange that a
   leading or trailing - is taken literally.*/

#include<stdio.h>

#define SIZE 1000


void getLine(char *str);
void expand(char *, char *);

int main()
{
  char s1[SIZE], s2[SIZE];
  getLine(s1);
  expand(s1, s2);
  printf ("%s\n",s2);
  return 0;
}

void getLine(char *str)
{
  int c, i = 0;
  while((c = getchar()) != '\n')
    str[i++] = c;

  if (c == '\n')
      str[++i] = c;

  str[++i] = '\0';

}

void expand(char *s1, char *s2)
{
  int c, i, j;
  i = j = 0;

  while((c = s1[i++]) != '\n')
    {
      if (s1[i] == '-' && s1[i+1] >= c)
	{
	  i++;
	  while (c < s1[i])
	    s2[j++] = c++; 
	}
      else
	s2[j++] = c;
    }

}
