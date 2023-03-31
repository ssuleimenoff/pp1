#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    for (int i=0; i<n.size(); i++){
    if (n[i]=='A'){
        n[i]+=19;}
    else if (n[i]=='C'){
        n[i]+=4;}
    else if (n[i]=='T'){
        n[i]-=19;}
    else if (n[i]=='G'){
        n[i]-=4;}}
    cout <<n;  
        }