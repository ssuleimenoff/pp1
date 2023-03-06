#include <bits/stdc++.h>
using namespace std;
int main(){
    multimap <int , int> m;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int a , b;
        cin >> a >> b;
        m.emplace(a + b , i);
    }
    for(auto i:m ){
        cout << i.second << " ";
    }
}