#include <bits/stdc++.h>
using namespace std;
int main(){
    map <char, int> m;
    string s;
    cin >> s;
    char c;
    for(int i=0; i<s.size(); i++){
        c = s[i];//s[0] - 1 буква s[i] -> i + 1 буква
        m[c]++;
    }

    map<char, int>::iterator it;

   for(it=m.begin(); it!=m.end(); it++){
       cout << it->first << " " << it->second << endl;
   }
}