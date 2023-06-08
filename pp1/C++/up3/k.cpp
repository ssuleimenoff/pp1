#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    reverse(s.begin() , s.end());
    int n = 0;
    for(int i=0;i<s.length();i++){
        n +=(s[i] - '0') * pow(2, i);
    }
    cout << n;
}