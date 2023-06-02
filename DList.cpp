#include<bits/stdc++.h>
#include<DNode.cpp>

using namespace std;

template< class T>
class DList{
protected:
    Node<T> *head;
    Node<T> *tail;
public:
    void insert(int undex , T value){
    DNode<T> *v = new DNode<T> (value);
    if(!head){
     head = v;
     tail = v;
     }
    else{
        DNode<T>*cur =head;
        for(int=0;i<index-1;i++)
            cur=cur->next;

        v-> next=cur->next->next;
        cur->next=v;
        v-> pre = cur;
        v->next->pre = v;
        ;

    }
    }
    void addLast(int index,T value){
        DNode <T> * v = new DNode<T>(value );
        if (!head){
            head=v;
            tail=v;
        }
        else{
            tail -> next=v;
            v-> pre = tail;
            tail =v;

        }
        size++;

    }
    void remove(int indexp ){
    // nem ra ngoai le
    DNode<T> * cur = head;
    for(int i=0 ;i< index; i++)
        cur=cur-> next;
    //TH1: Danh sach chi co 1 phan tu
    if(head==tail)
        head=NULL;
        tail=NULL;
    }
    //Th2; xoa thang dau
    //
    else if(head==cur)
    {
        head= cur-> next;
        cur-> next-> pre = NULL;

    }
    //TH3 xoa thang cuoi
    else if (index==size-1){//tail=cur
        tail -> tail ->pre;
        tail -> next= NULL;// cur-> pre-> next
    }
    //TH4 xoa bat ky
    else{
        Cur->pre->next = cur-> next; // 4->10
        cur-> next-> pre= cur-> pre; //4<-10

    }
    //viet ham replaceKey(T key,T value):
    // thuc hien thay the toan bo gia tri Key trong danh sach bang value
    void replaceKey(T key,T value)
    {Node<T> * cur = head;
    for(int i=0 ;i< index; i++)
        cur=cur-> next;
    if(head==tail)
        head=;}
    //chưa xog

    delete cur;

};
