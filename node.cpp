#ifndef _NODE_
#define _NODE_
template<class T>
class Node{
  public
   T data;
    Node<T>* next;

    Node() : data(T()), next(nullptr) {}

    explicit Node(const T& value) : data(value), next(nullptr) {}

    ~Node() {
        next = nullptr;
    }
};
#endif
