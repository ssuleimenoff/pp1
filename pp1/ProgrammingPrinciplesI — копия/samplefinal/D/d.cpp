#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int a = 0;
    int b = 1;
    cin >> s;
    s=s+".";
    vector<int> v;

    for(int i=0; i<s.size(); i++){
        if(s[i]!='.'){
            a = a*10 + s[i]-48;
        }else{
            v.push_back(a);
            a = 0;
        }
    }

    for(int i=0; i<v.size(); i++){
        if(v[i]>255) b = 0;
        if(v[i]<=-1 and v[i]!= -30) b = 0;
    }
cout<<b;
}