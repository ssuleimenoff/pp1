#include <bits/stdc++.h>
using namespace std;
int main(){

int n;

cin >> n;

int num [n][n];

for(int i=0; i<n; i++){

    num [0][i] = i;

}

for(int i=0; i<n; i++){

    num [i][0] = i;

}

for(int i=1; i<n; i++){
    for(int j=1; j<n; j++){

        num[i][j] = i*j;

    }
}


for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout << num [i][j] << " ";
    }
    cout << endl;
}

}