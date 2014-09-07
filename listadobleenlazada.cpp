#include "listadobleenlazada.h"
using namespace std;
using std::cout;

template<typename T>
void listaDobleEnlazada<T>::AddToLDETail(const T& el)
{
    if(tail != 0){
        //tail = new NodeDE<T>(el,0,tail);
        //tail->prev->next = tail;
        cout << "entro" << endl;
    }else{ head = tail = new NodeDE<T>(el);};
    //cout << el << endl;
}

template<typename T>
T listaDobleEnlazada<T>::DeleteFromLDETail()
{
    T el = tail->info;
    if(head == tail)// solo existe un nodo en la lista
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
template <typename T>
void listaDobleEnlazada<T>::setHoja() const
{
     NodeDE<T> * tmp;
     for(tmp = head; tmp != 0; tmp = tmp->next)
     {
        cout << tmp->info << endl;
     };
   //  std::cout << tmp->info << std::endl;


}

