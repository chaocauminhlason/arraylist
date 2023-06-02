#include<bits/stdc++.h>
using namespace std;

template<class T>
class SListOrder{
protected:
    Node<T> * head;
    int size;
public:
    SListOrder(): head(0), size(0){};
    bool find(T value){
        //cach 1
        Node<T> * cur =head;
        for (int i=0, i< size;i++){
            if(cur->element==value)
            return true;
            cur=cur->next;
    }
    //cach 2
    // for(Node<T> * cur= head;cur;cur= cur-> next){
    //     if(cur->element == value)
    //     return true;
    // }
    // return false
    //1 3 4 9 10
    //add 5-> 1 3 4 5 9 10
    void add(T value){
        find (value)? throw "value is exits"
        
         if(!head){ head = new DNode<T> (value);// th1 danh sach rong
        //th2 phan tu dau tien nho hon phan tu moi them
        else if(head->element > value){
            Node<T> * cur = new Node<T>(value,head);
            head=cur;
        }
        
        else{
                for(Node<T> * cur = head;
                cur; cur=cur->next){
                    if(cur->element<value){
                        //th3
                        if(!cur->next){
                            Node <T> *v= new Node<T>(value);
                            cur->next = v;
                            break;
                        }
                    }
                }
            }
        }
        
       
    }
}
int main(){
    // SListOrder<int> a;
    // a.add(1);
    // a.add(3);
    // a.add(4);
    // a.add(9);
    // a.add(10);
    // a.print();
    // a.add(5)
    //kiem tra n co phai so nguyen to hay ko
    // n<= 10^18) va danh gia do phuc tap
    int soNguyenTo(int n)
    { 
        if(n<2)
        return 0;
        if(n=2)
        return 1;
        //cach1 
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0)
            return 0;
        }
       return 1;
       //n-2= O(n)
    }
    int soNguyenTo2(int n)
    { 
        if(n<2)
        return 0;
        if(n==2)
        return true; 
        //cach2
        //O(sqrt(N))
        //SQRT(N) be hon N voi moi N

        for(i=3;i<=n;i+=2){
            if(n%i==0)
            return 0;          
        }
       return 1;
    }
   
   // viet ham tinh tong n so tu nhien dau tien va danh gia do phuc tap
    void total(int n)
    {
        cout<<"nhap N so tu nhien dau tien";
        cin>>n;
        for(i=1;i<=n;i++)
        total= total+1;
    }
    void total2(int n){
        int sum(n(n+1)/2)
    }
    

}