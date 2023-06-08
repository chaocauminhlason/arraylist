#include <bits/stdc++.h>
#include "Node.cpp"
using namespace std;
template< class T>
class SListTail {
protected:
    Node<T>* head;
    Node<T>* tail;
    int size;

    Node<T>* partition(Node<T>* low, Node<T>* high) {
        T pivot = high->data;
        Node<T>* i = low->prev;

        for (Node<T>* j = low; j != high; j = j->next) {
            if (j->data >= pivot) {
                i = (i == nullptr) ? low : i->next;
                swap(i->data, j->data);
            }
        }

        i = (i == nullptr) ? low : i->next;
        swap(i->data, high->data);
        return i;
    }
    void quickSortRec(Node<T>* low, Node<T>* high) {
        if (high != nullptr && low != high && low != high->next) {
            Node<T>* pivot = partition(low, high);
            quickSortRec(low, pivot->prev);
            quickSortRec(pivot->next, high);
        }
    }

    void mergeSortRec(SListTail < E > S, int siz) {
        SListTail <E> S1 = new Node<E>();
        SListTail <E> S2 = new Node<E>();
        for (int i = 0; i < siz / 2; i++) {
            E value = S.front();
            S1.addLast(value);
            s.removeFirst();
        }
        for (int i = 0; i < siz / 2; i++) {
            E value = S.front();
            S2.addLast(value);
            s.removeFirst();
        }
        merSortRec(S1, siz / 2);
        merSortRec(S2, siz / 2);
        merge(S1, S2);
    }
    void merge(SListTail<E>& A, SListTail<E>& B) {
        SListTail<E> S = new Node<E>();
        while (!A.isEmpty() && !B.isEmpty()) {
            E value_A = A.front();
            E value_B = B.front();
            if (value_B > value_A) {
                S.addLast(value_B);
                B.removeFirst();
            }
        }
    }
public:
    SListTail() :head(0), tail(0), size(0);
    bool isEmpty() const {
        return size == 0;
    }
    virtual ~SListTail() {
        while (head) {
            Node<E>* v = head;
            head = head->next;
            delete v;
        }
    }
    void print() const {
        for (Node<E>* v = head; v; v = v->next)
            cout << v->element << " ";
        cout << endl;

        void addLast(T value) {
            Node<T>* cur = new Node<T>(value)
                if (!head) {
                    head = cur;
                    tail = cur;

                }
                else {
                    tail->next = cur;
                    tail = cur;
                }

            size++;

        }
        void quickSort() {
            quickSortRec(head, tail);
        }

    };
    int main() {

    }

