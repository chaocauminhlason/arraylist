#include<bits/stdc++.h>
using namespace std;
 
 bool path(vector<vector<char>> A, int x_end,int y_end, int x_cur, int y_cur,int n,int m,
                                    vector<vector<bool>> C  
 ){
    //base1
    cout<< x_cur <<" "<<y_cur<<endl;
    if(x_cur==x_end && y_cur==y_end) return true;
    //base2
    if(x_cur <=0|| x_cur>n || y_cur <= 0 ||y_cur >m)
    return false;
    //base3
        if(A[x_cur][ y_cur]=='*') return false;
    //base4
    if(C[x_cur][y_cur]== true) return false;

    C[x_cur][y_cur]==true;
    return path(A, x_end,y_end,x_cur,y_cur-1,n,m,C) ||
    path(A, x_end,y_end,x_cur,y_cur+1,n,m,C) ||
    path(A, x_end,y_end,x_cur-1,y_cur,n,m,C) ||
    path(A, x_end,y_end,x_cur+1,y_cur,n,m,C);
 }
/*
cho một dãy số gồm n phần tử 
và một biểu thức toán học gồm các chữ cái và dấu +,-
Hãy thay thế các chữ cái bằng các giá trị bởi dãy số cho trước
để ta có thể được 1 biểu thức đúng
in ra tất cả các trường hợp
 
input:
6 
1 2 3 4 5 6 
A+ B + C = 10

Output:
1 + 4 + 5 = 10
3 + 3 + 4 = 10
2 + 3 + 5 = 10
*/

void printSol(int tmp[],int index, int k, int arr[], char opt[], int ans){
    //base case
    if (index == k ){
        int res = tmp[0];
        for (int i=0;i<k;i++)
            if(opt[i]=='+')
    }
}

int main(){
    // int n, m;
    // cin>> n>>m;
    // vector<vector<char>> A(n + 1, vector<char>(m + 1));
   
    // cin>> n >> m; // kich thuoc matran A
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= m; j++) {
    //         cin >> A[i][j];
    //     }
    // }
    // for (int i= 1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         cout<<A[i][j]<<" ";}
    //     cout<< endl; 
    // }    
    // int x_end,y_end, x_cur, y_cur;
    // cin >> x_end >> y_end >> x_cur >> y_cur;
    // vector<vector<bool>> C(n + 1, vector<bool>(m + 1, false));
    //  bool result = path(A, x_end, y_end, x_cur, y_cur, n, m, C);

    // if (result)
    //     cout << "Path exists!" << endl;
    // else
    //     cout << "Path does not exist!" << endl;
    
    return 0;
    }
