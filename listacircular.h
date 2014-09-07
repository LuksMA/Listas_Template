#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H
#include "Nodo.h"

template <class T>
class ListaCircular
{
public:
    ListaCircular(){ tail = 0 ;}
    void AddToLCETail(const T&);
    T DeleteFromLCETail();
    bool isEmpty(){
        return tail == 0;
    }
private:
     Node<T> *tail;
};

#endif // LISTACIRCULAR_H
