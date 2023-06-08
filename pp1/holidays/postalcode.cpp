#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    for(int i=0;i<(a+b+1);i++){
        string s;
        cin >> s;
        if(s[i] >= '0' && s[i] <= '9' && s[a] == '-'){
            cout << "YES";
        } 
        else cout << "NO";
           }
}