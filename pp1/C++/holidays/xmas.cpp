#include <bits/stdc++.h>
using namespace std;
int main(){
    string brackets , opened , closed;
    cin >> brackets;
    int n = brackets.length();
    if(brackets[n-1] == '('){
        cout << "NO";
    }
    for(int i=0;i<n;i++){
        if(brackets[i] == '('){
            opened.push_back(brackets[i]);
        }
        if(brackets[i] == ')'){
            closed.push_back(brackets[i]);
        }
        if(opened.length() == closed.length()){
            cout << "YES";
        }
    }
}