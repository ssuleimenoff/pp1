#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string , string > s;
    for(int i=0;i<n;i++){
        string z , x;
        cin >> z >> x;
        s[z] = x;
    }
    int m;
    cin >> m;
    for(int i=0;i<n;i++){
        string a , b;
        cin >> a  >> b;
        if((s[a].empty())){
            cout << "login error" << endl;
        }
        else if(s[a] != b){
            cout << "password error" << endl;
        }
        else {
            cout << "correct password" << endl;
        }
        
        }
    }
