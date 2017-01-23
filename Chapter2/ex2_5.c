/* Write the function any(s1,s2) which returns the first location in the string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. ( The standard library function strpbrk does the same job but retuns a pointer to the location
Author: Aang  22/01/17 ---God is Love!
 */

#include<stdio.h>

enum {SIZE = 1000};

int any(char *, char*);

int main(){
  int c, i = 0;
  char string1[SIZE], string2[SIZE];

  //filling 1st string
  while((c = getchar()) != EOF)
    string1[i++] = c;

  i = 0;
  //filling 2nd string
  while((c = getchar()) != EOF)
    string2[i++] = c;


  int index = any(string1, string2);

  (index != -1) ?

    printf("\nfirst match char: %c ---at position: %d", string1[index], index) :
    printf("\nNot matched any character");

  return 0;
}


int any(char s1[], char s2[]){
  int i, j;

  for(i = 0; s1[i] != '\0'; i++){
    for (j = 0; s2[j] != '\0'; j++)
      if(s1[i] == s2[j])
	return i;
  }
  
  if(s1[i++] == '\0')
    return -1;

}
