#include <bits/stdc++.h>
using namespace std;

template <class T>
class queue{
protected:
public:
int getSize
bool isEmpty() const{
    return siz;
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
void BubbleSort(int a[], int n){
    int t; // biến tạm t
    for (int i = 0; i < n; i++){
	for (int j = i + 1; j < n; j++){
		if (a[j] > a[j+1]){
                    t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
			}
		}
	}
}
void selectionSort(int a[],int n)
{
    int i, j, min_idx;
    for(int i=0;)
} 
};