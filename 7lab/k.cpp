#include <bits/stdc++.h>
using namespace std;

int maximumdigit(string s){
    sort(s.begin() , s.end());
    int max = (int)s[s.length() - 1] - 48;
    return max;
}
int main(){
    string s;
    cin >> s;
    cout << maximumdigit(s);
}