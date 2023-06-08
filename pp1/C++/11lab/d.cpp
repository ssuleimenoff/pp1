#include <bits/stdc++.h>

using namespace std;

const int N = 100 + 7;

int a[N][N];

int main(){
    
    int n, m;
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int col = 0;
            if(i + 1 <= n && j + 1 <= m){
                if(a[i][j] == 0) col++;
                if(a[i + 1][j] == 0) col++;
                if(a[i][j + 1] == 0) col++;
                if(a[i + 1][j + 1] == 0) col++;
                int col1 = 4 - col;
                if(col == 4 || col1 == 4){
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    
    cout << "YES";
    
}