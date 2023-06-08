#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;

    for(int i = 0; i <= n; i++){
        long long k = pow(i,i);
        cout << k << " ";
    }
}