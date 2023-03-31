#include <bits/stdc++.h>
using namespace std;
int main(){

int n,m;

cin >> n;

int num[n][n];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>num[i][j];
    }
}

int k = -1000000;


for(int i=0; i<n; i++){

    for(int j=0; j<n; j++){

        if(num[i][j]> k){

            k = num[i][j];

        }

    }
}

cout << k;

}