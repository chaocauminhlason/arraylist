#include<bits/stdc++.h>
#include "Node.cpp"
using namespace std;

template< class T>
class SStack{
    protected:
        Node <T> *head;
        int siz;
    public:
    //viết hàm cấu tử, hủy tử
    void push(T value){
        if(head)
        head = new Node<T> (value);
        else{
            Node<T> * cur = new Node<T> (value, head);
            head = cur;
        }
    }
    void pop() {
        if(!head) throw "stack is empty";
        Node<T> *cur= head;
        head= head-> next;
        delete cur;
    }
    T top()const{
        if(!head) 
            throw "stack is empty";
            return head-> element;
    }
    // algorithm size(){
    //     return (N-f+r) mod N;

    // }
    
    // algorithm isEmpty(){

    // }
    // algorithm enqueue(o) if size()= N-1
    // then throw FullQueueException
    // else
    // Q[r]<-o
    // r <-(r+1)

};
int main(){
    SStack <int> a;
    a.push(5);
    return 0;

}