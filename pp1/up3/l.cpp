#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'z'){
            s[i] = 'a';
            cout << s[i];
        }
        else if(s[i] == 'Z'){
            s[i] = 'A';
            cout << s[i];
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] += 1;
            cout << s[i];
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 1;
            cout << s[i];
        }
        else{
            cout << s[i];
        }
        
    }

    
}