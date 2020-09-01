// Author Daniel Mikita djm6907@psu.edu
// Collaborator Octavia Szkutnik oas5135@psu.edu
// Collaborator Joseph Imperial jri5073@psu.edu
// Collaborator Mya Romano mlr5819@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *ctemp = readline("Enter temperature in celsius: ");
  
  double c = atof(ctemp);
  double f = 

  f = (c * 9/5) + 32;

  printf("%.6f° in Celsius is equivalent to %.6f° Fahrenheit.",c, f);

  return 0;
 }