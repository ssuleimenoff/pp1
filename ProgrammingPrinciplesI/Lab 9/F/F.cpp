#include <bits/stdc++.h>
using namespace std;
int main(){

string s;
cin >> s;
int a = 0;
string b = "YES";

map<string,int> m;

for(int i = 0; i<s.length(); i++){


    if(s[i]==')')
    {
        a--;
    }
    if(s[i]=='('){
        a++;
    }
    if(a<0){
        b = "NO";
    }


}
if(a!=0){
    b="NO";
}
cout << b << endl;
}