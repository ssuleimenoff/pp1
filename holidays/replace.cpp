#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,s1;
    cin >> s >> s1;
    char rep;
    cin >> rep;
    for(int i=0;i<s1.length();i++){
        for(int j=0;j<s.length();j++){
            if(s1[i] == s[j]){
                s[j] = rep;
            }
        }
    }
    cout << s;
}