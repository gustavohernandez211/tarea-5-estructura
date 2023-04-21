//        Gustavo Hernandez Gomez
//        profe la verdad no se como enviar ese poco de repositorios dentro de 1 archivo y meterlo al github

#include "lista.h"
#include <iostream>
//punto 1
int contarOcurrencias(int v, Lista l){
  //complejidad= O(n)
    int ocurrencias = 0;
    int i = 1;
    while (i < l.longLista()) {
        if (l.infoLista(i) == v) {
            ocurrencias++;
        }
        i++;
    }
    return ocurrencias;
}
//punto 2
Lista obtenerMenores(Lista l, int v) {
  // complejidad O(n)
    Lista menores;
    Nodo* actual = l.act;

    while (actual != nullptr) {
        if (actual->dato < v) {
            menores.anxLista(actual->dato);
        }
        actual = actual->sig;
    }
    return menores;
}

//punto 3
void insertarEnListaOrdenada(int v, Lista l) {
  //complejidad O(n)
    Nodo* nuevo = new Nodo;
    nuevo->dato = v;
    nuevo->sig = nullptr;
    
    if (l.anxLista == nullptr || v <= l.anxLista->dato) { // lista vacía o v es menor que el primer elemento
        nuevo->sig = l.prim;
        l.anxLista = nuevo;
    } else {
        Nodo* actual = l.anxLista;
        while (actual->sig != nullptr && actual->sig->dato < v) {
            actual = actual->sig;
        }
        nuevo->sig = actual->sig;
        actual->sig = nuevo;
    }
    return v;
}

//punto 4

// complejidad O(n)

void concatenarListas(Lista l1, Lista l2) {
    Lista l3;
    Nodo* actual = l1;

    // Copiar elementos de l1 a l3
    while (actual != nullptr) {
        l3.anxLista(actual->dato);
        actual = actual->sig;
    }

    actual = l2;

    // Copiar elementos de l2 a l3
    while (actual != nullptr) {
        l3.anxLista(actual->dato);
        actual = actual->sig;
    }

    return l3;
}






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

  Lista l2


}
