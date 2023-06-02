#include<bits/stdc++.h>

using namespace std;

class queue{
private:   
    int* queue;
    int maxSize;
    int head;
    int tail;
public:
 CQueue(int k) {
        maxSize = k;
        queue = new int[maxSize];
        head = -1;
        tail = -1;
    }
void size() {
    if (isEmpty()) throw "danh sach rong"
        else if (tail >= head) {
            return tail - head + 1;
        } 
        else {
            return (maxSize - head) + (tail + 1);
        }
}
bool isEmpty() {
    return (head == -1 && tail == -1);
}
/* algorithm enqueue(o) if size()= N-1
    then throw FullQueueException
    else
    Q[r]<-o
    r <-(r+1)
    */
 int front() {
        if (isEmpty()) 
            throw "danh sach rong "
           
       else {
            return queue[head];
        }
    }
};
int main()
{
    return 0;
}