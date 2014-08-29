#ifndef NODO_H
#define NODO_H
template <typename Type>
class Node{
public:
    Node *next;
    int info;
    Node(){
        next = 0;
    }
    Node(int i, Node * in = 0){
        info = i;
        next = in;
    }

};


#endif // NODO_H
