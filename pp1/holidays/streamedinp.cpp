#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[10];
    for(int i=1;i<10;i++){
        a[i] = 0;
    }
    while(cin >> n){
        for(int i=1;i<10;i++){
            if(i == n){
                a[i]++;
            }
        }
        if(n == 0) break;
    }
    for(int i=1;i<10;i++){
        cout << a[i] << " ";
    }
}