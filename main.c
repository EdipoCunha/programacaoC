#include <stdio.h>

int main(void) {
int inicio, contador, fim;

  printf("Digite o número inicial: ");
  scanf("%d", &inicio);
  printf("Digite o Número Final: ");
  scanf("%d", &fim);
  
 
  while(inicio <= fim){ 
  if(inicio %3 == 1){
    printf("%d ", inicio);
    }
  inicio++;
  }
  return 0;
}