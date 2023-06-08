#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char c;
    cin >> c;
    vector <int> a;
    for(int i=0;i<s.length();i++){
        if(c == s[i]){
            a.push_back(i);
        }
    }
    if(a.size() == 1){
        cout << a[0];
    }
    else{
        cout << a[0] << " " << a[a.size() - 1];
    
    }

}