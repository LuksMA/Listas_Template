#ifndef LISTAED_H
#define LISTAED_H
#include <iostream>
#include <string>
#include "Nodo.h"
using namespace std;

template <class T>
class ListaED
{

private:
    NodeDE<T> *head, *tail;
    int index;

public:
    ListaED(){head = tail = 0;}
    void AddToLDETail(T);
    T DeleteFromLDETail();
    void setHoja() const;
    string hola(){return "hola";}
    friend class ExpresionPostFijas;
};

#endif // LISTAED_H
