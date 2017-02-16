/* Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice (at
   the price of more tests outside.) Write a version with only one test inside the loop and measure
   the difference in run-time.
   Abel Abner 14/02/17
   Sigue pendiente.....
*/
#include<stdio.h>
#include<time.h> 

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{

  int low, high, mid;
  low = 0;
  high = n - 1;
  mid = (low+high)/2;  
  while (low <= high && x != v[mid]) {    

    if (x < v[mid])
      high = mid + 1;
    else
      low = mid + 1;
    mid = (low+high)/2;  
  }

  if(x == v[mid])
    return mid;
      
  return -1;
  /* no match */
}


int main()
{
  int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int x = 7;
  int resultado;
  int n = NELEMS(v);

  clock_t t1 = clock();
  if((resultado = binsearch(x, v, n)) != -1)
    printf("Elemento encontrado en la posicion: %d del arreglo v[10]\n", resultado);
  clock_t t2 = clock();
  printf("El proceso tardo.. %Lf ", (long double)(t2-t1));

  return 0;
}


/*
   To illustrate a three-way decision, here is a binary search function that decides if a particular
  value x occurs in the sorted array v . The elements of v must be in increasing order. The
  function returns the position (a number between 0 and n-1 ) if x occurs in v , and -1 if not.
*/

//http://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c
