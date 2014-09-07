#include "listacircular.h"

template<class T>
void ListaCircular<T>::AddToLCETail(const T& el)
{
    if(isEmpty()){
        tail = new Node<T>(el);
        tail->next = tail;
    }else{
        tail->next = new Node<T>(el,tail->next);
        tail = tail->next;
    };
}

template <class T>
T ListaCircular<T>::DeleteFromLCETail()
{

}
