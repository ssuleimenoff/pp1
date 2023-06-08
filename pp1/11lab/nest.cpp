#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    while(n > 0){
        int nd = n % 10;
        sum += nd;
        n = (n - nd) / 10;
    }
    cout << sum;
    return 0;
}