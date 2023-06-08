#include <iostream>
using namespace std;
int main(){

    int n;

    cin >> n;

    n++;
    int num[n];
    num[0]=0;

    for(int i=1; i<n; i++){
        cin >> num[i];
        }



    for(int i=1; i<=n; i++){
        
        if(num[i]!=num[i-1] and num[i-1]!=0){

            cout << num[i-1] << " ";

        }

    }


/*
        for(int i=1; i<n; i++){
        cout << num[i] << " ";
        }
*/        

    }
