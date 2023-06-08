#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    vector <int> b;
    vector <int> c;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0) b.push_back(a[i]);
        else if(a[i] % 2 != 0) c.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    for(int i = 0; i < b.size(); i++){
        cout << b[i] << " ";
    }
    sort(c.begin(), c.end());
    for(int i = 0; i < c.size(); i++){
        cout << c[i] << " ";
    }

}