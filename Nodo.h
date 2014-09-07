#ifndef NODO_H
#define NODO_H
template <typename Type>
class Node{
public:
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

template <class Type>
class NodeDE{
public:
    NodeDE *prev;
    NodeDE *next;
    Type info;

    NodeDE(){
        next = prev = 0;
    }
    NodeDE(const Type& el, NodeDE *n = 0, NodeDE *p = 0){
        info = el;
        next = n;
        prev = p;
    }
};


#endif // NODO_H
