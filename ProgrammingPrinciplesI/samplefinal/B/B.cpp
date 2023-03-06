#include <bits/stdc++.h>
using namespace std;

int main(){

int n,m;
cin >> n >> m;
int arr[n][m];
char c;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>c;
        if(c=='#') arr[i][j] = 1;
        if(c=='.') arr[i][j] = 0;
    }
}


for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout << arr[i][j] << " ";
    }
cout << endl;
}

    return 0;
}