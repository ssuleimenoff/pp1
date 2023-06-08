#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt = 0;
    string s1, s2;
    set <char> s;
    cin >> s1 >> s2;
    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            if(s1[i] == s2[j]){
                s.insert(s1[i]);
            }
        }
    }
    for(auto now :s){
        cout << now ;
    }
}