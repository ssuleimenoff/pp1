#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <int , int> m;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        m[x]++;
    }
    map <int, int> ::iterator it;
    int siu = 0;
    for(it = m.begin(); it != m.end();it++){
        if(it->second == 1){
            siu += it->first;
            cout << it->first << endl;
        }
    }
    cout << siu;
}