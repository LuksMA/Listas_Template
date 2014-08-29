#include <QCoreApplication>
#include <iostream>
#include "Nodo.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Node<int> *p = new Node<int>(10);
    p->next = new Node<int>(8);
    p->next->next = new Node<int>(50);

    cout << p->info <<endl;
    cout << p->next->info << endl;
    cout << p->next->next->info << endl;



    return a.exec();
}
