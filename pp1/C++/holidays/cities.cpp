#include <bits/stdc++.h>
using namespace std;
map <string, string> mp;
map <string, bool> was;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        int num;
        for(int j=0;j<num;j++){
            string t;
            cin >> t;
            mp[t] =  s;
            was[t] = true;
        }
    }
    cin >> n;
    for(int i=0;i<n;i++){
        string town;
        cin >> town;
        if(was[town]) cout << mp[town];
        else cout << "Unknown";
    }
}