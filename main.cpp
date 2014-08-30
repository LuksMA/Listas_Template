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
    lista.addToHead("soy la cabeza");
    lista.addToTail("soy la cola");
    lista.setHoja();

    cout << "---------------" << endl;
    cout << "eliminar cabeza" << endl;
    cout << "---------------" << endl;

    lista.deleteFromHead();
    lista.setHoja();
    cout << "---------------" << endl;
    cout << "eliminar cola" << endl;
    cout << "---------------" << endl;

    lista.deleteFromTail();
    lista.deleteFromTail();
    lista.setHoja();

    cout << "---------------" << endl;
    cout << "eliminar nodo" << endl;
    cout << "---------------" << endl;
    lista.deleteNode(c);


    lista.setHoja();




    return a.exec();
}
