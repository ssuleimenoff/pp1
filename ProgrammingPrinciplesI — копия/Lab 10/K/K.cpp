#include <bits/stdc++.h>
using namespace std;

bool isPrime(int b){

bool c = true;

if (b == 0) c = false;
if (b == 1) c = false;
if (b == 2) c = true;

for (int i = 2; i < b; i++){
    if(b%i==0) c = false;
}

return c;
}


int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] = abs(a[i]);
    }

    int k = 0;

for(int i = 0; i < n; i++){
    if(isPrime(a[i])){
        k++;
    }
}

cout << k << endl;
    
}