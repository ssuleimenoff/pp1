#include <bits/stdc++.h>
using namespace std;
int main(){

    map<string, int> m;
    m.insert(make_pair("MON", 6));
    m.insert(make_pair("TUE", 5));
    m.insert(make_pair("WED", 4));
    m.insert(make_pair("THU", 3));
    m.insert(make_pair("FRI", 2));
    m.insert(make_pair("SAT", 1));
    m.insert(make_pair("SUN", 7));

    string s;

    cin >> s;
    
    map<string, int>::iterator it;

    for(it = m.begin(); it != m.end(); it++){
        if((*it).first == s){
            cout << it->second;
        }
    }

}