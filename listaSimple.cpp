#include <iostream>
#include "listaSimple.h"
using namespace std;

template <typename Type>
ListaSimple<Type>::~ListaSimple(){    // elimina el contenido de la lista
    for(Node<Type> *p; !isEmpty();)
    {
        p = head->next;
        delete head;
        head = p;
    }
}

template <typename Type>
void ListaSimple<Type>::addToHead(Type el) //ingresa al principio de la lista
{
    head = new Node<Type>(el,head);
    if(tail == 0)
    {
        tail = head;
    }
}

template <typename Type>
void ListaSimple<Type>::addToTail(Type el) //ingresa al final de la lista
{
    if(tail != 0) // si no esta vacia
    {
        tail->next = new Node<Type>(el);
        tail = tail->next;
    }else
    {
     head = tail = new Node<Type>(el);
    }
}

template <typename Type>
Type ListaSimple<Type>::deleteFromHead()
{
    Type  in = head->info;
    Node<Type> *tmp = head;
    if(head == tail) //si solo hay un nodo en la lista
    {
        head = tail = 0;
    }else head = head->next;
    delete tmp;
    return in;
}

template <typename Type>
Type ListaSimple<Type>::deleteFromTail()
{
    Type in = tail->info;
    if(head == tail) //si solo hay un nodo en la lista
    {
        delete head;
        head = tail = 0;

    }else
    {

        Node<Type> *tmp;
        for(tmp = head; tmp->next != tail; tmp = tmp->next);
        delete tail;
        tail = tmp;
        tail->next = nullptr;

    }
   // this->setHoja();
    return in;
}

template <typename Type>
void ListaSimple<Type>::deleteNode(Type el)
{
    if(head != 0)  // si no esta vacia
     if(head == tail && el == head->info ) // si solo es uno, se puede mejorar
        {
            delete head;
            head = tail = 0;
        }
        else if(el == head->info){ // si hay mas de un nodo en la lista
            Node <Type> *tmp = head->next;
            head = head->next;
            delete tmp;   //se elimina la antigua cabecera - head
        }else{
            Node <Type> *tmp, *pred;
            for(pred = head, tmp = head->next; // ingresa un nodo sin cabeza
                tmp != 0 && (tmp->info == el); // elimina el nodo
                pred = pred->next , tmp = tmp->next);
            if(tmp != 0){
                pred->next = tmp->next;
                if(tmp==tail)
                {
                    tail = pred;
                }
                delete tmp;

            }
        }
}
template <typename Type>
bool ListaSimple<Type>::isInList(Type el) const
{
    Node<Type> * tmp;
     for(tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next);
     return tmp !=0;

}

template <typename Type>
void ListaSimple<Type>::setHoja() const
{
     Node<Type> * tmp;
     for(tmp = head; tmp != 0; tmp = tmp->next)
     {
         std::cout << tmp->info << '\n' ;
     };
   //  std::cout << tmp->info << std::endl;


}



