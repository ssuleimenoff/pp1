#include <bits/stdc++.h>
using namespace std;

int check(int a, int b, int i, string l){

    if(i==l.length()){
        return a;
    }

    b = l[i]-48;
    if(a<b){
        a=b;
    }

    return check(a, b, i+1, l);

}

int main(){

    string n;
    cin >> n;
    cout<<check(0,0,0,n);

}