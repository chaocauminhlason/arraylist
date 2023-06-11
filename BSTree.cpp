#include <bits/stdc++.h>
#include "BNode.cpp"
using namespace std;

template <class E>
class BStree{
    Node<E> * root;

    int countLeafRec(Node<E> *& v){
        if(v){
            if(v->isLeaf()) return 1;
            return countLeaf(v->left) + countLeaf(v->right);
        }
        return 0;
    }
    int countInternalRec(Node<E> *& v){
        if(v){
            if(v->isInternal())
        }
        return 0;
    }

    int heightRec(Node <E> * & v) const{
        if(v){
        if(v->isleaf()) return 0;
        return 1 + max(heightRec(v->left),heightRec(v->right));
    }
        return -1;
    }
    Node<E> * TreeSearch(E k, Node<E> *& v) const{
        if(!v) return v;
        if(k < v-> element) return TreeSearch(k,v->left);
        if(k == v-> element) return v;
    }
    void insertRec(E & value,Node<E> *& node){
        if(!node) {
            node = new Node<E> (value);
            return ;
        }
        if(value<node->element) insertRec(value,node->left);
        else insertRec(value,node->right);
    }
    void inOrderRec(Node<E> *& v){
        if(!v) return;
        inOrderRec(v->left);
        cout<< v->element<< " ";
        inOrderRec(v->right);
    }
     void preorderRec(Node<E> *v) {
        if (!v) return;
        cout << v->element << " ";
        preorderRec(v->left);
        preorderRec(v->right);
    }
    int countNode() const{
        return countNodeRec(root);

    }
    int countNode() const{
        int res= 0;
        countNodeRec(root,rec);
        return res;
    }
public:
    BStree(): root(0){};

    
    int height() const// goi ngoai ham main
    {
        
        return heightRec(root);
    }
    bool search(E &value) const{
        if(!searchRec(value,root)) return false;
        return true;
    }
    void insert(E value){
        insertRec(value,root);
    }
    
    // int depthRec(Node <E> *& v) const
    // {
    //     if(v->isleaf()) return 0;
    //     return 1 ;
    // }
void preorder() {
        preorderRec(root);
    }
int countNode() const{}
};
int main() {
    BStree<int> a;

    // Thêm các phần tử vào cây
    a.insert(5);
    a.insert(3);
    a.insert(7);
    a.insert(2);
    a.insert(4);
    a.insert(6);
    a.insert(8);
    a.preorder();
    return 0;

}
