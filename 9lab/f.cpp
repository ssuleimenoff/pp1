#include <bits/stdc++.h>
using namespace std;
int main(){
    string brackets,opened,closed;
    cin >> brackets;
    int n = brackets.length();
    if(brackets[n-1] == '(') {
        cout << "NO";
        return 0;

    }
    for(int i=0;i<brackets.length();i++){
        if(brackets[i] == '('){
            opened.push_back(brackets[i]);
        }
        else if(brackets[i] == ')'){
            closed.push_back(brackets[i]);

        }
    }
    if(opened.length() == closed.length()){
        cout << "YES";
    }
    else cout << "NO";
    }