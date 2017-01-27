/* Write a function setbits(x,p,n,y) that returns x with the n bits that begin at positionp set to the rightmost n bits of y,leaving the other bits unchanged.*/

/* Author: Abel Abner --God is Love*/
#include<stdio.h>

unsigned setbits(unsigned x,int p,int n,unsigned y);

int main(void)
{
    printf("%u",setbits((unsigned)77,4,3,(unsigned)57));
}

unsigned setbits(unsigned x,int p,int n,unsigned y)
{
  int fieldX;
  
  /* Sacando los de y */
  y = (y & ~(~0 << n )) << (p+1-n); //(1)

  fieldX = x & ~(~(~0 << n) << (p+1-n));//(2)

  /* 1. Sacamos los n primeros bits de 'y'
        Para ello tenemos que hacer _shift to left_ n bits con puros unos (por ello el ~0)
	lo que nos queda son n ceros empezando por la derecha. Despues prosigue negar el resultado, para
	poder hacer un AND (&) con el y original, y asi obtener lo que equivale los primers n bits en y.
	Por ultimo en este paso movemos estos n bits hacia la posicion correspondiente con el field de bits en X
	que queremos intercalar.
     
     2. ~(~(~0 << n) -> recorremos hacia la izquierda n bits, lo que significa que tendremos n bits en 0 y los demas        en unos. Negamos ese resultado y entonces nos quedaría lo contrario.
        Despues recorremos (p+1-n) esos bits y volvemos a negar para quedar acorde con el rango de bits en X
	que queremos hacer 0, para así poder hacer un AND y puedan quedar como estaban los demas bits fuera del rango.
	
     3. Finalmente hacemos un OR con los dos resultados y voala! :)
   */
  return fieldX | y; //(3)
}


