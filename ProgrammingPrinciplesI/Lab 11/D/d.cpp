#include <bits/stdc++.h>
using namespace std;
int main(){

    int a,b;
    cin >> a >> b ;
    int arr[a][b];

    string s = "Yes";

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin >> arr[i][j];
        }
    }
    if(a == 1 or b == 1){
        s = "Yes";
    }

    for(int i=0; i<a-1; i++){
        for(int j=0; j<b-1; j++){
            if((arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1])%4 == 0 and (arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1])<4){
                s = "No";

            }
        }
    }


    cout << s;
    return 0;
}