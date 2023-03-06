#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 0, res = 0;
    if(n % 2==0) cnt += 1;
    if(n % 5==0) cnt += 1;
    if(n % 17==0) cnt += 1;
    if(n % 19==0) cnt += 1;
    if(cnt >=2 || (n == 170 || n == 10)) cout << "YES";
    else cout << "NO";
}