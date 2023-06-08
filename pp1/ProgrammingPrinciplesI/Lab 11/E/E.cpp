#include <bits/stdc++.h>
using namespace std;
int main(){

int n;
cin >> n;

map<string, int> m;

string s;
string d ="";

for(int i=1; i<n+1; i++){
    cin >> s;

    for(int j=0; j<s.length(); j++){

        
        d = s[j];
        if(m[d]<i){
            m[d]++;
        }
        

    }
}
d="";
map<string, int> :: iterator it;

for(it=m.begin(); it!=m.end(); it++){
        if(it->second==n){
            d = d + it->first+ " "; 
        }
    }

    if(d!=""){
        cout << d << endl;
    }else{
        cout << "NO COMMON CHARACTERS";
    }
    
}

