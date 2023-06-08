#include <bits/stdc++.h>
using namespace std;
string tobin(int n, string s){

    if(n==0){
    return s;
    
    }
     return tobin (n/2, char(n%2+'0')+s);
}
int main(){
    int n;
    cin >> n;
    cout << tobin(n,"");
}