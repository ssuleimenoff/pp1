#include <bits/stdc++.h>
using namespace std;

int main(){
    string brackets , open, close;
    cin >> brackets;
    int n = brackets.length();
    if(brackets[n-1] == '('){
        cout << "NO";
        return 0 ;
    }
    for(int i=0;i<brackets.length();++i){
        if(brackets[i] == '('){
            open.push_back(brackets[i]);
    
        }
        else if(brackets[i] == ')'){
            close.push_back(brackets[i]);
        }
}
if(open.length() == close.length()){
    cout << "YES";
}
else cout << "NO";
}