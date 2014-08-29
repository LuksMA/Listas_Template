#include <QCoreApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << "Hola mundo" << endl;
    cout << " otro cambio" << endl;

    return a.exec();
}
