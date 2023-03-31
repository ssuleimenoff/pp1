#include <bits/stdc++.h>
using namespace std;
int pow2(int a){

if(a==0) return 1;
if (a==1) return 2;

return pow2(a-1)*2;

}

int main(){

    int n;
    cin >> n;
    cout << pow2(n) << endl;


}