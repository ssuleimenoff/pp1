#include <bits/stdc++.h>
using namespace std;

char a[36];
int knary(int n, int k){
   if(n < k){
    cout << a[n];
    return 0;
   }
   knary(n/k, k);
   cout << a[n % k];
}

int main()
{
    int n, k;
    cin >> n >> k;
    for(int i = 48; i <= 58; i++){
        a[i - '0'] = i;
    }
    for(int i = 10; i <= 36; i++){
        a[i] = i + 55;
    }
    knary(n, k);
}