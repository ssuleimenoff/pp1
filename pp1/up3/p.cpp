#include <bits/stdc++.h>
using namespace std;

string strToBool(string str){
    if(str == "1"){
        return "true";
    }
    else if(str == "0"){
        return "false";
    }
    return str;
}
int main(){
    string s;
    cin >> s;
    cout << strToBool(s);
}