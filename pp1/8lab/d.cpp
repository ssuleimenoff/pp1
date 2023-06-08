#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> m;
    a.erase(a.begin() + m);
    for(int i=0;i<n-1;i++){
        cout << a[i] << " ";
    }

}