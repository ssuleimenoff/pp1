#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt = 0;
        string s;
    cin >> s;
    map <char, int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    for(auto now : m){
        if(now.second%2!=0) cnt++;
    }
    if(cnt > 1){
        cout << "NO";
        return 0;
    }
    else cout << "YES";
}