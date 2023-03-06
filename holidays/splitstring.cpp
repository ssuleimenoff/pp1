#include <bits/stdc++.h>
using namespace std;
int main(){
    string given, comb;
    cin >> given;
    int n;
    cin >> n;
    for(int i=1;i<n;i++){
        string s;
        cin >> s;
        comb += s[i];
        }
        if(comb == given) cout << "YES";
        else cout << "NO";
}