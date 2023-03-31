#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    int first = s.find_first_of("?!.");
    int second = s.find_first_of("?!.", first + 1);
    cout << s.substr(first , second - first);
}