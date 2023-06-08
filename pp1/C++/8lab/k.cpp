#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    sort(a.begin(), a.end());
    for(int i=n-k;i<n;i++){
        sum+=a[i];
    }
    cout << sum;
}