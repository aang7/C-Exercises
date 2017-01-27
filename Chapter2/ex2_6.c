/* Write a function setbits(x,p,n,y) that returns x with the n bits that begin at positionp set to the rightmost n bits of y,leaving the other bits unchanged.*/

#include<stdio.h>

unsigned setbits(unsigned x,int p,int n,unsigned y);

int main(void)
{
    printf("%u",setbits((unsigned)77,4,3,(unsigned)57));
}

unsigned setbits(unsigned x,int p,int n,unsigned y)
{
  /* Sacando los de y */
  y = (y & ~(~0 << n )) << (p+1-n);
  /* field de x */
  int fieldX;
  fieldX = x & ~(~(~0 << n) << (p+1-n));

  
  return fieldX | y;
}


