#include <bits/stdc++.h>
using namespace std;

string check(int a, int i, string l){
    string g = "Yes";
    int b = l.length()-1;
    
    
    if(l[i+a]!=l[b-a]){
        g = "No";
    }

    if((a-b) <= 1) return g;
    
    return check(a+1, i, l);

}

int main(){

    string n;
    cin >> n;
    cout<<check(0,0,n)<<endl;
    

}