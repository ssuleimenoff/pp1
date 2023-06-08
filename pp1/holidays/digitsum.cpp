#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    for(int i=100;i<=999;i++){
        long long sum = 0;
        long long y = i;
        while(y > 0){
            sum += y % 10;
            y /= 10;
        }
        if(sum == n){
                cout << i << endl;
            }
    }
}