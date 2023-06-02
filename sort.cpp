#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int a[], int n){
    int t; // biến tạm t
    for (int i = 0; i < n; i++){
	for (int j = i + 1; j < n; j++){
		if (a[j] > a[j+1]){
                    t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = t;
			}
		}
	}
}
// sắp sếp nổi bọt gaimr dần
void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

}
//Viết thuật toán sắp xếp chọn ưu tiên các số chẵn lên trước, lẻ phía sau
void selectionSort(int a[], int n) {
    for(int start =0; start <n-1; start++){
        int minIndex = start;
        for (int i = start+1; i<n; i++){
            if((a[i]<a[minIndex] &&
            a[i]%2== a[minIndex]%2) ||
            (a[minIndex]%2 && a[1]%2 ==0))
            {
                minIndex= i;
            }
            
        }
        swap(a[start],a[minIndex]);
    }
}
void mergeSort(int ){
    int l,r ;
    int index =l;
    int m=(l+r)/2;

}
int main(){

    return 0;
}