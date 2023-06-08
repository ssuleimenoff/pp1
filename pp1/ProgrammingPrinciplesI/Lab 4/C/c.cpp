#include <bits/stdc++.h>
using namespace std;
int main(){

int n,m;

cin >> n>>m;

int num[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>num[i][j];
    }
}

int a = 0;

for (int i=0;i<n;i++){
    for(int j=0;j<m;j++){

        if (num[i][j]<0){
            a++;
        }

    }
}

cout<<a;

}