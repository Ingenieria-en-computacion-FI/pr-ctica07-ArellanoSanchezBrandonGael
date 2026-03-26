#include "lista_simple.h"

Nodo * crearNodo(void *dato, size_t size) {
  Nodo *nuevo = (Nodo*)malloc(sizeof(Nodo));
  if(nuevo != NULL){
    nuevo ->siguiente = NULL;
    nuevo->dato = malloc(size);
    mempcy(nuevo->dato, dato, size); //copia memoria, memory copy
  }
  return nuevo;
}
void borrarNodo(Nodo *n);
    if(nuevo != NULL){
      free(nuevo->dato);

bool modificarNodo(Nodo *n, void *d);
