#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s, s2, s3;
    cin >> s;
    s3 = s;
    int n = s.length();
    while(n > 0){
        s2 = s;
        reverse(s.begin(), s.end());
        if(s2 != s){
            break;
        }
        s3.pop_back();
        s = s3;
        n--;
    }
    cout << n;
    
}