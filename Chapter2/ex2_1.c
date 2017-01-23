#include<stdio.h>
#include<limits.h>

int main()
{

  /* Signed */
  printf("Minimo Signed Short: %d\n", -(short) ((unsigned short) ~0 >> 1) - 1);
  printf("MAXIMO Signed Short: %d\n", (short) ((unsigned short) ~0 >> 1));

  printf("Minimo Signed int: %d\n", -(int) ((unsigned int) ~0 >> 1) -1);
  printf("MAXIMO Signed int: %d\n", (int) ((unsigned int) ~0 >> 1));
  printf("Maximo Signed float: %f\n", (double) ((unsigned int) ~0 >> 1));
  /* Unsigned */
  printf("MINIMO unsigned char: %d\n", ((unsigned char) 0)); //have to be 0 obvious
  printf ("MAXIMO unsigned char: %d\n", (unsigned char) ~0);
  printf ("MAXIMO unsigned int: %u\n", ((unsigned int) ~0));

  /* constants in lib <limits.h> */
  printf ("UINT_MAX: %u\n", UINT_MAX);
  printf ("CHAR_BIT: %d\n", CHAR_BIT);
  printf ("UCHAR_MAX: %d\n", UCHAR_MAX);
    
  return 0;
}
