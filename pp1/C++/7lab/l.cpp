#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string s){
    string s1;
    for(int i = s.length() - 1;i >= 0;i--){
        s1.push_back(s[i]);
    }
    if(s1 == s) return true;
    return false;
}
int main(){
    string s;
    cin >> s;
    if(ispalindrome(s)) cout << "Yes";
    else if(!ispalindrome(s)) cout << "No";
}