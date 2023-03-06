#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sum = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cout << s[i];
        }
    }
}