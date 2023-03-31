#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin >> n >> m;

    int num[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            cin >> num[i][j];

        }
    }

    double r;
    int c;
    double t;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            r = sqrt(num[i][j]);
            c = r;
            t = r-c;

            if(t==0){
                num[i][j] = r;
            }

        }
    }



        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            cout << num[i][j]<< " ";

        }
        cout << endl;
    }


}