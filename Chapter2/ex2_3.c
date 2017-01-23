#include <stdio.h>

int hexToDec(char buffer[]);

enum estados{ IN = 1, OUT = 0 };

int main()
{
  char buffer[22] = "0xAF";
    
  printf ("Hexadecimal: %s\t Decimal: %d", buffer, hexToDec(buffer));
  
  return 0;
}

int hexToDec(char buffer[]){

  int state = IN;
  int i, decimal, hexadecimal;
  i = decimal = hexadecimal = 0;

  //starts with 0x or 0X?
  if (buffer[i] == '0')
    {
      
      if (buffer[i++] == 'x' || buffer[i++] == 'X' )
	; //empty body
      
    }

  //check the chars
  for (; state ; ++i)
    {
      if(buffer[i] >= '0' && buffer[i] <= '9')
	hexadecimal = buffer[i] - '0'; //me da el valor que tiene el buffer
      else if(buffer[i] >= 'a' && buffer[i] <= 'f')
	hexadecimal = buffer[i] - 'a' + 10;
      else if(buffer[i] >= 'A' && buffer[i] <= 'F')
	hexadecimal = buffer[i] - 'A' + 10;
      
      else
	state = OUT; //Estoy fuera del 

      if(state)
	decimal = 16*decimal + hexadecimal;
      
    }

 
  return decimal;
  
}
