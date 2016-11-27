/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++
+                                                       +
+  ESTE PROGRAMA IMPRIME EL VALOR DE LA EXPRESION       +
+  C = GETCHAR()  != EOF                                +
+                                                       +
++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++
+                                                        +
+                    ALGORITMO:                          +
+ Recibir un caracter con getchar                        +
+ Asignarlo a una variable                               +
+ ¿la variable es igual a EOF?                           +
+ El resultado de la evaluacion anterior, asigarlo a una +
+ segunda variable                                       +
+ Imprimir el valor de la segunda variable               +
+                                                        +
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include <stdio.h>

 main()

 {                /* Abre main*/

  int c;
  int variable;

  printf("\nEste programa imprime el valor de la expresion ( c = getchar() == EOF)");
  printf("\nIntroduzca un caracter, EOF inclusive\n");
  
  variable = ((c = getchar()) == EOF);

  printf("%d\n", variable);
 
 }              /* Cierra main*/
