#include<stdio.h>
//http://foro.elhacker.net/programacion_cc/getchar_eof-t333818.0.html
main(){

int c;

  
 while((c=getchar()) != EOF) {
    printf("\nEste es el valor de EOF=>%d", EOF);
  }

}
