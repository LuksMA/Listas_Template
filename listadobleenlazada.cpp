#include "listadobleenlazada.h"

listaDobleEnlazada::listaDobleEnlazada()
{
}

template<class T>
void listaDobleEnlazada<T>::AddToLDETail(const T& el)
{
    if(tail != 0){
        tail = new NodeDE<T>(el,0,tail);
        tail->prev->next = tail;
    }else head = tail = new NodeDE(el);
}

template<class T>
T listaDobleEnlazada<T>::DeleteFromLDETail()
{
    T el = tail->info;
    if(head = tail)// solo existe un nodo en la lista
    {
        delete head;
        head = tail = 0;
    }else
    {
        tail = tail->prev;
        delete tail->next;
        tail->next = 0;

    }
    return el;

}
