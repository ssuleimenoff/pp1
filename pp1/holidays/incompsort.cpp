#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m, b;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            for(int k=i+1;k<m;k++){
                if(a[i][j] < a[k][j]){
                    b = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = b;
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}