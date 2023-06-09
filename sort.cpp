#include<bits/stdc++.h>
using namespace std;

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
/*int partition( int a[], int l, int r){
    int pivot = a[l];
    int last = l ;
   
    for (int i=l+1,i <= r,i++){
        if(a[last]<pivot){
        i++;
        swap(a[last],a[i]);
    }
    }
    swap(a[l],a[last]);
    return last;
}*/
void quickSort(int a[], int l, int r){
    if(l >=r ) // base case
        return;
        int pivot = partition(a,l,r);
    quickSort(a,l,pivot-1);
    quickSort(a,pivot+1,r);
}



int tongChuSo(int a)
{
	int nRem, nSum = 0;
	for (; a != 0;)
	{
		nRem = a[] % 10;
		nSum = nSum + nRem;
		a = a / 10;
	}
	return nSum;
}
    //bài tap
// int partition( int a[], int l, int r){
//     int pivot = a[l];
//     int last = l ;
   
//     for (int i=l+1,i <= r,i++){
//         tongChuSo(a[last]);
//         if(nSum<pivot){
//         i++;
//         swap(a[last],a[i]);
//     }
//     }
//     swap(a[l],a[last]);
//     return last;
}
int main(){

    return 0;
}