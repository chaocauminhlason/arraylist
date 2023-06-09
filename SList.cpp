#include <bits/stdc++.h>
#include "Node.cpp"
using namespace std;

template< class T>
class SList{
protected:
    int siz;
    Node<T> 8* head;
public:
    // ham cau tu
    SList():head(0);
    //Ham tien ich
    // ham tra ve kich thuoc
    //ham kiem tra danh sach rong hay khong?};

    // cac ham thoa tac

    // ham getlink lay ra node
    Node <T> * & getlink(int index){
    void print() const{
        If(isEmty()) throw "List is Empty"
        Node<T> * cur = head;
        for(int i=0; i<siz;i++){
            cout<< cur->element<<endl;
            cur= cur-> next;


        }
    }
    void add (int i,T value){
        if (i<0 || i>size)
            throw "Index out of range";
        Node <T> * & l = getLink(i);
        Node <T> * cur = new Node<E>(value, l)
        l=cur;
        siz++;
    }
    void replace(int i, T value){
        if (i<0|| i>= size)
            throw "Index out of range";
        //cach 1

        /*cach 2*/
        Node <T> * cur = getLink(i);
        cur->element = value;
    }
    bool searchKey( T value){
        Node<T> *cur = head;
        for (int i=0;i<=siz;i++)
        {
        If(cur->element==value)
            return true;
        }
        return false;
    }
    //ham xoa dau
    void removeFirst(){
        if (!head) throw "List is emty";
        Node<T> *t = head;
        head= head -> next;
        siz--;
    }
    void remove(int index){
    if(!head) throw "List is empty";
    // cach1
    Node<T> *cur = getlink(index);
    Node<T> *t= cur;
    cur = cur-> next;
    delete t;
    siz--;
    }
    //cach 2
    FOR(int i = 0; i< index-1;i++)
        cur = cur-> next;
	int countNode(Node<T> * cur)


};
int main() {
Slist<int> a;
a.insert(0,1)
}
