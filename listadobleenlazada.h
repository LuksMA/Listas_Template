#ifndef LISTADOBLEENLAZADA_H
#define LISTADOBLEENLAZADA_H
#include "Nodo.h"

template <class T>
class listaDobleEnlazada
{
protected:
    NodoDE<T> *head, *tail;
public:
    listaDobleEnlazada(){head = tail = 0;}
    void AddToLDETail(const T&);
    T DeleteFromLDETail();
};

#endif // LISTADOBLEENLAZADA_H
