#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string , double> m;
    for(int i=0;i<n;i++){
        string name;
        int point;
        cin >> name >> point;
        m[name] = point;
    }
    for(auto it: m){
        if(it.first[0] % 2 == 0){
            cout << it.first << " " << (it.second - it.second/2) << endl;
        }
        else cout << it.first << " " << (it.second + it.second/2) << endl;
    }
}