#include <stdio.h>

int main(void) {
  int numVezes, contador;
printf("Digite um valor: ");
scanf("%d", &numVezes);


contador = 0;
while(contador < numVezes){
printf("Impressão %d\n", contador);
contador = contador + 1;
}
  return 0;
}