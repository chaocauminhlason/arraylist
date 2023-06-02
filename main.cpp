#include <bits/stdc++.h>

using namespace std;
template<class T >
class Alist {
protected:
        T lst[1000]
        int siz;
        int maxSize ;
public :
    Alist() {
        siz = 0;
        };
//cách 2
//các hàm tiện ích
bool isEmty()
//kiem tra xem danh sach da day hay chua
bool isFull() const{
    return siz==maxSize;
    }
//mot so ham thao tac
//them vao cuoi dnah sach
void add(T value){
    if(isFull())throw "List is full";
    lst[siz]= value;
}
void print()const{
    for (int i=0;i<siz;i++)
            cout<<lst[i]<<" ";}
T getElement(int i){
    if(i>=siz || i<0)
        throw "Index out of range";
    return lst[i];
    }
/*
lst[0] = 5
-> replace (0,4)
-> lst[0] =4   */
void replace(int i, T value){
    if(i>=siz || i<0)
        throw "Index out of range";
        lst[1] = value ;
    }
void insert(int index, value){
    if(isFull())
        throw "List is full"
    if(index<0 || index>siz)
        throw "Index out of range";
    for(int i=siz-1;i>= index; i--)
    lst[i+1]= lst[i];
    }
  void insert(int index, value){
    if(isFull())
        throw "List is full"
    if(index<0 || index>siz)
        throw "Index out of range";
    for(int i=siz-1;i>= index; i--)
    lst[i+1]= lst[i];

    }
    /*void remove(int index, value){
    if(isFull())
        throw "List is full"
    if(index<0 || index>siz)
        throw "Index out of range";
    for(int i=siz-1;i>= index; i--)
    lst[i+1]= lst[i];
    } */
    bool search(const T& value) const{
        for(int i=0;i<siz; i++)

        }
    void replaceKey( const T &Key,const T &value){
    //Xet them
        if(!search(key))throw "Error";
        for(int i=0; i<siz; i++){
            if(lst[i]==key) lst[i]=value;
            }
        }

};

int main()
{
   Alist<int> lst;
   try
   {

   }
   catch;
    return 0;
}
