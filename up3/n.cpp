#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cout << s[i];
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << s[i];
        }
    }
}