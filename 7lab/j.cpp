#include <bits/stdc++.h>
using namespace std;

int digithater(int n){
    int sum = 0;
    while(n > 0){
        int num = (n % 10);
        sum += num/2;
        n /= 10;
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    cout << digithater(n);
}