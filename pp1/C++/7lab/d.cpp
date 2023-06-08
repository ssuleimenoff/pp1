d.cpp
#include <bits/stdc++.h>
using namespace std;

int getsum(string s, int i){
    if(i == s.size() - 1) return(s[i]-'0');
    return(s[i] - '0' ) + getsum(s,i + 1);
}
int main(){
    string s;
    cin >> s;

    cout << getsum(s,0);
}