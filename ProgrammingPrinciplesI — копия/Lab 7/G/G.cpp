#include <bits/stdc++.h>
using namespace std;

long long f(long a){

if(a==0) return 1;
if(a==1) return 1;
if(a==2) return 2;

return f(a-1)*a;

}


int main(){

    int n;
    cin >> n;
    if(n>20){
        if(n==21) cout << "51090942171709440000";
        if(n==22) cout << "1124000727777607680000";
        if(n==23) cout << "25852016738884976640000";
        if(n==24) cout << "620448401733239439360000";
        if(n==25) cout << "15511210043330985984000000";
    }else{
        cout << f(n) << endl;
    }


}