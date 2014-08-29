#ifndef NODO_H
#define NODO_H
template <typename Type>
class Node{
    Node *next;
    Type info;
    Node(){
        next = 0;
    }
    Node(Type i, Node * in = 0){
        info = i;
        next = in;
    }

};


#endif // NODO_H
