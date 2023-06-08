#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, max = 0, min = 0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(max < a[i]) max = a[i];
        if(min > a[i]) min = a[i];
    }
    cout << min << " " << max << endl;
}