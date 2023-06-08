#include <bits/stdc++.h>
using namespace std;
int fibn(int n){
    int first = 0,second = 1 , checker = 2,res = 0;
    if(n == 1) return 0;
    else if(n == 2) return 1;
    while(n > checker){
        res = first + second;
        first = second;
        second = res;
        checker++;
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    cout << fibn(n);
}