#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset <pair<int , int>> a;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x, y;
        cin >> x >> y;
        a.insert(make_pair(x, y));
    }
    for(auto now : a){
        cout << now.first << " " << now.second << "\n";
    }
}