#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    bool flag=true;
    for (int i=0; i<n; i++){
        cin>>a[i];
        b[i]=a[i];}
    sort(a,a+n);
      for (int i=0; i<n; i++){
        if(a[i]!=b[i]){
         flag=false;}}
        if (flag==true){
       cout << "Int ";
        }
       else
       cout <<"not";
    }