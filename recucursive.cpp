#include <bits.stdc++.h>
using namespace std;

void reverseArray(int a[], int i, int j){
	if (i >= j) return;
	if (i < j){
		swap(a[i], a[j]);
		reverseArray(a, i + 1, j - 1);

	}
	cout << i << " " << endl;
};
void moveDisks(int count, int goc, int dich, int trunggian){
	if (count>0)
	{
		moveDisks(count - 1, goc, trung gian, dich);
		cout << "chuyen dia" << cout << "tu" << goc << "den" << dich << "," endl;
		moveDisks(count - 1, trunggian, dich, goc);
	}
}
