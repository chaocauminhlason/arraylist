#include <iostream>
using namespace std;

bool KTSNT(int x)
{
	if(x<2)
		return false;
	for(int i=2; i<=x/2; i++)
		if(x%i==0)
			return false;
	return true;
}
bool ktsntdn()
{
    if (KTSNT==true)
    int n, tmp;
    cin &gt;&gt; n;
    int res = 0;
    while(n &gt; 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;

}
int fabi(int x){
    if (n==1|| n==0)
    return n;
    n% 2==0;
    return fabi(n/2);
    return fabi(n/2) + fabi(n/2+1);
}
/*
hàm liệt kê các tổ hợp chập 2 của 5
*/
void Print(int a[], int index){
    if (index == k){//base case
        for(int i= 0; i < k; i++)
        cout <<a[i]<< " ";
        cout<< endl;
        return ;
    }
}
for (int i=k_; i<n; i++)
 a[index]= i ;
 Print(a, index+1, i+1);