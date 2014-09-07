#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include "Nodo.h"
#include <iostream>

template <typename Type>
class ListaSimple{
private:
    Node<Type> *head, *tail;
public:
    ListaSimple(){
        head = tail = 0;
    }
    ~ListaSimple();
    bool isEmpty(){
        return head == 0;
    }
    void addToHead(Type);
    void addToTail(Type);

    Type deleteFromHead();
    Type deleteFromTail();

    void deleteNode(Type);
    bool isInList(Type) const;

    void setHoja() const;
    friend class ExpresionPostFijas;
};

#include "listaSimple.cpp"
#endif // LISTASIMPLE_H
