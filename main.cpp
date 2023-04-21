#include "lista.h"

int main(){
  Lista l1;
  l1.anxLista(4);
  l1.anxLista(12);
  l1.anxLista(1);
  l1.anxLista(7);
  l1.anxLista(14);
  l1.anxLista(3);
  l1.anxLista(8);
  l1.anxLista(9);
  
  int r = l1.buscarMenor();
  printf("El menor número en la lista es %d\n", r);
  return 0;
}
