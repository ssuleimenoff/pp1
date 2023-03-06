#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , sum = 0;
    cin >> n;
    set <int> a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    for(auto now : a){
        sum += now;
    }
    cout << sum ;
}