#include <bits/stdc++.h>
using namespace std;
int main(){


    string s;
    string l;
    cin >> s;

    map<string, int >m;

    for(int i=0; i<s.length(); i++){
        l = s[i];
        m[l]++;
    }

    map<string, int>::iterator it;
    
    int e = 0;

    for(it=m.begin(); it!=m.end(); it++){
        if((*it).second % 2 == 1){
            e++;
        }
    }

    if(e <= 1){
        cout << "ZA WARUDO TOKI WO TOMARE" << endl;
    }else{
        cout << "JOJO"<< endl;
    }

}