#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, start, end1;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> start >> end1;
    a.erase(a.begin() + start, a.begin() + end1 + 1 );
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    
}