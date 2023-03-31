#include <bits/stdc++.h>
using namespace std;
bool isPerfect(string s){
    double n = stoi(s);

    double n1 = sqrt(n);
    if(n1 == trunc(n1)) return true;
    return false;
}
int main(){
    string s;
    cin >> s;

    stack <char> st;
    for(int i=0;i<s.size();i++){
        if(st.empty()){
            st.push(s[i]);
            continue;
        }
        string ex = "";
        ex += st.top();
        ex += s[i];

        if(isPerfect(ex)){
            st.pop();
            continue;
        }
        st.push(s[i]);
    }
    if(st.empty()){
        cout << "Stack is empty";
        return 0;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
}