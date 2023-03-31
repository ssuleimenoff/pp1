#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string uni;
    stack <string> s;
    for(int i=0;i<n;i++){
        string com;
        cin >> com;
        if(com == "add"){
            cin >> uni;
            s.push(uni);
        }
        else if(com == "print"){
            cout << s.top() << endl;
        }
        else if(com == "delete"){
            s.pop();
        }
    }
}