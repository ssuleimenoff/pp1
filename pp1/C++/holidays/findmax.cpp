#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int max[n];
    for(int i=0;i<n;i++){
        max[i] = -1;
        for(int j=0;j<n;j++){
            if(max[i] < a[i][j]) a[i][j] = max[i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             cout << max << " ";
        }
        cout << endl;
    }
}