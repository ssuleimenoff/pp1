#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    set<int> s;
    int x;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x;
        s.insert(x);
    }

    if(s.size()!=n){
        cout << "NO";
    }else if(s.size()==n){
        cout << "YES";
    }
}