#include <bits/stdc++.h>
using namespace std;
int main(){
    string s , t;
    cin >> s >> t;
    int a = 0;
    for(int i=1;i<=t.length();i++){
        string temp = t.substr(0, i);
        if(s.find(temp) != -1){
            a = temp.length();
        }
    }
    t = t.substr(a , t.length() - a);
    cout << s.append(t);

}