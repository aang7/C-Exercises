/*Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.*/

#include<stdio.h>

int invert(int, unsigned int , unsigned int);

int main()
{

  printf ("Resultado. %d\n", invert(7, (unsigned)4, (unsigned)3));
  return 0;
}

int invert(int x, unsigned int p, unsigned int n){
    int fieldX = (~(x >> (p+1-n)) & ~(~0 << n)) << (p+1-n);
    x = x & ~(~(~0 << n) << (p+1-n)); //ya quedaron en 0's los del field

  return fieldX | x;
}
