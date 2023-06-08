#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, k, x;
    cin >> n >> k;

    map<int, int> m;

    for(int i=0; i<n; i++){
        cin >> x;
        m[x]++;
    }

    map<int, int>::iterator it;

    for(it=m.begin(); it!=m.end(); it++){
        if((*it).first == k){
            cout << (*it).second;
        } 
    }
}