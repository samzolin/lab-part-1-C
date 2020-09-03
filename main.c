//Author: Samantha Zolin
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *tempstr = readline("Enter temperature in celsius: ");
  double temp = atof(tempstr);
  
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temp, temp * 1.8 + 32);
  return 0;

  
}