#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Nodo del Treap
struct NodoTreap {
    int clave, prioridad;
    NodoTreap *izquierda, *derecha;
};

// Crear un nuevo nodo
NodoTreap* nuevoNodo(int clave) {
    NodoTreap* temp = new NodoTreap;
    temp->clave = clave;
    temp->prioridad = rand() % 100;
    temp->izquierda = temp->derecha = nullptr;
    return temp;
}
