#ifndef _BNODE_
#define _BNODE_

template < class E>
struct Node{
    E element;
    Node<E> * left, *right;
    Node(E e= E(), Node<E> *l =0,Node<E> * r= 0)
    :element(e), left(l), right(r){}
};
#endif