 #ifndef _DNODE_
 #define _DNODE_
 // DNODE
 template<class E>
  struct Node
  {
      T element;

      Node (T e = T(),
            Node<T> *p=0,
            Node<T> *n=0
        :element(e), pre(p), next(n){}
  };
 #endif
