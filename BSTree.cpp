#include <bits/stdc++.h>
#include "BNode.cpp"
using namespace std;

template <class E>
class BStree{
    Node<E> * root;
    int heightRec(Node <E> * & v) const{
        if(v->isleaf()) return 0;
        return 1 + max(heightRec(v->left),heightRec(v->right));
    }
    node<E> * TreeSearch(E k, Node<E> *& v) const{
        if(!v) return v;
        if(k < v-> element) return TreeSearch(k,v->left)
        if(k == v-> element) return v;
    }
public:
    
    int height() const// goi ngoai ham main
    {
        
        return heightRec(root);
    }
    int depthRec(Node <E> *& v) const
    {
        if(v->isleaf()) return 0;
        return 1 ;
    }