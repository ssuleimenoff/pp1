#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int x = a[0];
    for(int i=1;i<n;i++){
        x = x ^ a[i];
    }
    cout << x << endl;
    int c = 1;
    while(c != x){
        if(c > x){
            cout  << "no";
            return 0;
        }
        c = c * 2;
    }
    cout << "yes";
}
