#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, z, x;
    cin >> n >> z >> x;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<=z;i++){
        sort(a, a + n, greater <int>());
        cout << a[i] << " ";
    }
    for(int i=x;i<=(a.size() / 2);i++){
        cout << a[i] << " ";
    }
    cout << a[i] << " ";
}