#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , start , endl;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> start >> endl;
    reverse(a.begin() + start , a.begin() + endl + 1);
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
}