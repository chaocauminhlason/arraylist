#include<bits/stdc++.h>

using namespace std;

template<class T>
class VStack{

    protected:
        vector<T> vs;
        int n;
        int siz;
    public:
        VStack(int){
            vs.resize(n);
            siz =n;
        }
        int size() const{
            return siz;
        }
        bool isEmpty() const{
            return siz==0;
        }
        
        void push(T value){
            if (siz== vs.size())
                vs.push_back(value);
            else
                vs[siz]=value;
            siz++;    
        }
        int top(){
            if(isEmpty())throw "stack is empty";
            return vs[siz-1];
        }
        void pop(){
            if(isEmpty()) throw "stack is empty";
            siz--;
        }

};
// int main(){
//     VStack<int> a(10);
//     a.push(5);
//     a.push(3);
//     a.push(2);
//     a.pop();
//     for(int i=0 ; i <a.size(); i++)
//         cout<<a.top()<<" ";
//         a.pop();
//     return 0;
// }

bool CheckBracket(const string &s)
{
    stack<char> brackets;

    for (char bracket : s) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            brackets.push(bracket);
        } else if (bracket == ')' || bracket == ']' || bracket == '}') {
            if (brackets.empty()) {
                return false;  
            }

            char top = brackets.top();
            brackets.pop();

            if ((bracket == ')' && top != '(') ||
                (bracket == ']' && top != '[') ||
                (bracket == '}' && top != '{')) {
                return false; 
            }
        }
    }

    return brackets.empty();
}

int main() {
    string s;
    cout << "Nhập biểu thức chứa các dấu ngoặc: ";
    getline(cin, s);

    if (CheckBracket(s)) {
        cout << "dấu ngoặc hợp lệ." << endl;
    } else 
        cout << "dấu ngoặc không hợp lệ." << endl;
    

    return 0;
}
