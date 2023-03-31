#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    int a=1;

    long sym[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            sym[i][j] = 0;

        }
    }


        for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            if(i + j == n-1){
                sym[i][j] = a;
                a++;
            }

        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){


            if(sym[i][j] == 0){
                cout <<".";
            }else{
            cout << sym[i][j];
            }
        }
    cout<<endl;
    }

}