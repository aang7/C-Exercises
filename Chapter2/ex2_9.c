/* Exercise 2-9. In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit
   in x . Explain why. Use this observation to write a faster version of bitcount.
   Abel Abner 09/02/17
*/
#include<time.h> 
#include<stdio.h>

/* bitcount: count 1 bits in x (Fastest version) */
int bitcount(unsigned x)
{
  int b;
  for (b = 0; x != 0; x &= (x-1))
    b++;
  return b;
}

int main()
{
  clock_t t1 = clock();
  printf("%d has %d bits turned ON 1\n", 7, bitcount(7));
  clock_t t2 = clock();
  printf("The time taken is.. %Lf ", (long double)(t2-t1));
  return 0;
}

/*
  Explanation:
    Supposed we have x = 7 that is equal in binary to: 00000111
    if we do (x - 1) then we have 6 wich is equal to: 00000110
    so the rightmost 1-bit was cleared.
    This happen using unsigned types. 
*/

/*
  Also:
    The time taken among the bitcount function book example
    takes more time of execution than the modified version(fastest)
*/
