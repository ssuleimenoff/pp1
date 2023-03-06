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

long k = -1000000000;
long l = -1000000000;


for(int i=0; i<n; i++){

    for(int j=0; j<n; j++){

        if(num[i][j]> k){

            k = num[i][j];

        }

    }
}


for(int i=0; i<n; i++){

    for(int j=0; j<n; j++){

        if(num[i][j] > l and num[i][j]!=k){

            l = num[i][j];

        }

    }
}



int a = 0;
string b = "No";

for(int i=0; i<n-1; i++){
    for(int j=0; j<n; j++){

        if(num[i][j] != num [i+1][j]){
            b = "Yes";
        }

    }
}
if (b == "No"){

    l = 0;

}

cout << l;

}