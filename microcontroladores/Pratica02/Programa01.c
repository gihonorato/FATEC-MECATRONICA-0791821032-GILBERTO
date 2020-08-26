#include <stdio.h>

int main(void) {
  float A,B,X,y;
  printf("informe os valores de A,B e X:");
  // sacanf("%f", &A);
  scanf("%f%f%f", &A, &B, &X);
  y = (A*B) + B;
  printf("Resultado da equacao: %.3f\n", y);
  return 0;
  
