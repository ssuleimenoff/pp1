#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
int n;
cin >> n;
int s,t;
cin>>s>>t;
int a[n];
for (int i=1;i<=n;i++){
    cin>>a[i];
}
for (int i=s;i<=t;i++){
    swap(a[s], a[t]);
}
for (int i=1;i<=n;i++){
    cout <<a[i]<<" ";
}}