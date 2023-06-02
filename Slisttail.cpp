#include <bits/stdc++.h>
#include "Node.cpp"
using namespace std;
 template< class T>
 class SListTail{
 protected:
     Node<T> *head;
     Node<T> *tail;
     int size;
     SListTail <E> S1 = new Node<E>();
     SListTail <E> S2 = new Node<E>();
     for(int i = 0;i< siz/2; i++){
      E value = S.front();
      S1.addLast(value);
      s.removeFirst();
     }
      for(int i = 0;i< siz/2; i++){
         E value = S.front();
          S1.addLast(value);
         s.removeFirst();
     }
     void merge(SListTail<E> &A, SListTail<E> &B){
      SListTail<E> S = new Node<E>();
      while(!A.isEmpty() && !B.isEmpty()){
         //
      }
     }
 public:
    SListTail():head(0),tail(0),size(0);
   bool isEmpty() const(
      return size==0;
   )
   virtual ~SListTail()
      while (head){
         Node<
      }
    void addLast(T value){
         Node<T> * cur = new Node<T>(value)
         if(!head) {
            head = cur;
            tail = cur;

         }
         else{
         tail->next= cur;
         tail = cur;}

         size++;

    }
    mer
    /*
Node<T>* mergeLists(Node<T>* list1, Node<T>* list2) {
        Node<T> *mergedList = nullptr;

        if (!list1)
            return list2;
        if (!list2)
            return list1;

        if (list1->data <= list2->data) {
            mergedList = list1;
            mergedList->next = mergeLists(list1->next, list2);
        } else {
            mergedList = list2;
            mergedList->next = mergeLists(list1, list2->next);
        }

        return mergedList;
    }

    Node<T>* getMiddle(Node<T>* head) {
        if (!head)
            return head;

        Node<T> *slowPtr = head;
        Node<T> *fastPtr = head->next;

        while (fastPtr && fastPtr->next) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }

        return slowPtr;
    }

    Node<T>* mergeSort(Node<T>* head) {
        if (!head || !head->next)
            return head;

        Node<T> *mid = getMiddle(head);
        Node<T> *nextOfMid = mid->next;

        mid->next = nullptr;

        Node<T> *left = mergeSort(head);
        Node<T> *right = mergeSort(nextOfMid);

        return mergeLists(left, right);
    }
*/
     };
     int main (){

     }
