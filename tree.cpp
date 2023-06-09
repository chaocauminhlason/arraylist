#include <bits/stdc++.h>
#include "BNode.cpp"
using namespace std;

template<class E>
class Tree{
    Node<E> * root;

     int heightRec(Node <E> * & v) const{
        if(v){
        if(v->isleaf()) return 0;
        return 1 + max(heightRec(v->left),heightRec(v->right));
    }
        return -1;
    }
    void insertRec(E & value,Node<E> *& node){
        if(!node){
            node = new Node<E> (value);
            return ;
        }
        if( value%2== (node->element)%2){

            if(value<node->element) insertRec(value,node->left)
        else 
        insertRec(value,node->left)
        }
        else 
        if(value%2) insertRec(value,node-> left) ;
    }
    public:
};
