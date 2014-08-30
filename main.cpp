#include <QCoreApplication>
#include <iostream>
#include <string>
#include "Nodo.h"
#include "listaSimple.h"
#include "listadobleenlazada.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string f, b, c;
    f = "dos";
    b = "mundo";
    c = "hola";
    cout << "12324245435" << endl;
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

    cout << "eliminado: " <<  lista.deleteFromHead() <<endl;
    lista.setHoja();
    cout << "---------------" << endl;
    cout << "eliminar cola" << endl;
    cout << "---------------" << endl;


    cout << "eliminado: " << lista.deleteFromTail() << endl;
    lista.setHoja();

    cout << "---------------" << endl;
    cout << "eliminar nodo" << endl;
    cout << "---------------" << endl;
    lista.deleteNode(c);


    lista.setHoja();




    return a.exec();
}
