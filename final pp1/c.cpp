#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n;
    cin >> n;
    for(int i=100;i<=999;i++){
        ll sum = 0;
        ll y = i;
        while(y > 0){
            sum += y % 10;
            y /= 10;
        }
        if(sum == n){
            cout << i << endl;
        }
    }
}