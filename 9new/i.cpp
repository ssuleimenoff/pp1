#include<bits/stdc++.h>
using namespace std;
int main(){
    map <string,int> m;
    int n;
    cin>>n;
    string x;
    for (int i=1; i<=n; i++){
        cin>>x;
       if(m[x]==0){
        cout<<"new user added"<< endl;
        m[x]++;
       }
      else
        cout<< "user already exists"<<endl;
    }}