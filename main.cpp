#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Nodo del Treap
struct NodoTreap {
    int clave, prioridad;
    NodoTreap *izquierda, *derecha;
};

// Rotación a la derecha
NodoTreap* rotarDerecha(NodoTreap* y) {
    NodoTreap* x = y->izquierda;
    NodoTreap* T2 = x->derecha;

    x->derecha = y;
    y->izquierda = T2;

    return x;
}

// Rotación a la izquierda
NodoTreap* rotarIzquierda(NodoTreap* x) {
    NodoTreap* y = x->derecha;
    NodoTreap* T2 = y->izquierda;

    y->izquierda = x;
    x->derecha = T2;

    return y;
}

// Crear un nuevo nodo
NodoTreap* nuevoNodo(int clave) {
    NodoTreap* temp = new NodoTreap;
    temp->clave = clave;
    temp->prioridad = rand() % 100;
    temp->izquierda = temp->derecha = nullptr;
    return temp;
}

// Recorrido en orden del Treap
void recorridoEnOrden(NodoTreap* raiz) {
    if (raiz) {
        recorridoEnOrden(raiz->izquierda);
        cout << "Clave: " << raiz->clave << " | Prioridad: " << raiz->prioridad;
        if (raiz->izquierda)
            cout << " | Hijo izquierdo: " << raiz->izquierda->clave;
        if (raiz->derecha)
            cout << " | Hijo derecho: " << raiz->derecha->clave;
        cout << endl;
        recorridoEnOrden(raiz->derecha);
    }
}
