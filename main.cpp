#include <QCoreApplication>
#include <iostream>
#include <string>
#include "Nodo.h"
#include "listaSimple.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string f, b, c;
    f = "dos";
    b = "mundo";
    c = "hola";
    /*
    Node<string> *p = new Node<string>(f);
    p->next = new Node<string>(b);
    p->next->next = new Node<string>(c);

    cout << p->info <<endl;
    cout << p->next->info << endl;
    cout << p->next->next->info << endl;*/

    ListaSimple <string>lista;
    lista.addToHead(f);
    lista.addToTail(b);
    lista.addToTail(c);
    lista.setHoja();




    return a.exec();
}
