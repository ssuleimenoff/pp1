#include <bits/stdc++.h>
using namespace std;

int check(int a, int i, string l){

    if(i==l.length()){
        return a;
    }

    a = a+(l[i]-48)/2;
    return check(a, i+1, l);

}

int main(){

    string n;
    cin >> n;
    cout<<check(0,0,n);

}