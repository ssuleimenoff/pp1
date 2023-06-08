#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string , int> m;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        int a;
        cin >> s >> a;
        if(!m[s]){
            m[s] = a;
        }
        else {
            m[s] += a;
        }
    }
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }
}
