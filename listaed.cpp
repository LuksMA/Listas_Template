#include "listaed.h"


using namespace std;
using std::cout;

template<class T>
void ListaED<T>::AddToLDETail(T el)
{
     //cout << el << endl;
      if(tail != 0){
        tail = new NodeDE<T>(el,0,tail);
        tail->prev->next = tail;
        index += 1;
      }else{ head = tail = new NodeDE<T>(el); index+=1;};
}

template<class T>
T ListaED<T>::DeleteFromLDETail()
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
    index -=0;
    return el;

}
template <class T>
void ListaED<T>::setHoja() const
{
     NodeDE<T> * tmp;
     for(tmp = head; tmp != 0; tmp = tmp->next)
     {
        cout << tmp->info << ' ';
     };
   //  std::cout << tmp->info << std::endl;


}

