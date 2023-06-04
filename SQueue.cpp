#include <bits/stdc++.h>
using namespace std;

template <class T>
class queue{
protected:
public:
int getSize() const{
	return siz;

bool isEmpty() const{
    return siz==0;
}
void enqueue(){
    if(isEmpty()) throw "Queue is Empty"
    Node<T> *cur = new Node<T>(value);
    if(!head){
        head =cur;
        tail =cur;
    }
    else{
        tail-> next = cur;
        tail = cur;
    }
    siz++;
}
void dequeue(){
    if(isEmpty()) throw "Queue isEmpty"
    Node <T> *cur = head;
    head = head-> next;
    delete cur;
    siz--;
}
T front(){
    return head-> element;
}
void clear(){
    // thực hiện xoa toàn bộ phần tử của queue
    while(!isEmpty())
        dequeue();
}
// hàm sắp xếp nổi bọt (bubble sort)

void selectionSort(int a[],int n)
{
    for ( int start = 0; start< n-1 ; start++){
		int minIndex = start;
		for (int i = start+1; i< n; i++){
			if((a[i]< a[minIndex] &&
				(a[i]% 2==a[minIndex]%2 ||
				(a[minIndex]%2 && a[i]%2==0)
				){
					minIndex = i;
				}
		}
		swap(a[start],a[minIndex]);
	}
} 

};