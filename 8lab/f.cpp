#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int pos , value;
    cin >> pos >> value;

    a.insert(a.begin() + pos , value);
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
}