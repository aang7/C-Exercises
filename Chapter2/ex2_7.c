/*Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
  position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
  Author: Abel Abner 27/01/17

*/
#include<stdio.h>

int invert(int, unsigned int , unsigned int);

int main()
{

  printf ("Resultado: %d\n", invert(7, (unsigned)4, (unsigned)3));
  return 0;
}

int invert(int x, unsigned int p, unsigned int n){
  int fieldX = (~(x >> (p+1-n)) & ~(~0 << n)) << (p+1-n);//valor del field
  x = x & ~(~(~0 << n) << (p+1-n)); // en 0's los del field

  return fieldX | x;
}

/* por _field_ me refiero al rango de bits de interes */
/* Si bien no es lo mas elegante ni optimo, fue como se me ocurrio _gg_ :) */
