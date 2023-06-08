#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> mp;
    set <int> s;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        s.insert(z);}
    int m;
    cin>>m;
     for(int i=0;i<m;i++){ 
       int x,y;
       cin>>x>>y;
       mp[x]=y;}
    for(auto i:mp){
        int cnt=0;
        for(auto j:s){
    if(j>=i.first && j<=i.second){
        cnt++;
    }
    }
    cout<<cnt+1<<endl;
    } 
    
}