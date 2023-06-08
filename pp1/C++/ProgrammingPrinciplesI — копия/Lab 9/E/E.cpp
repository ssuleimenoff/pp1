#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string x;
    cin >> n;

    map<string, int> m;

    for(int i=0; i<n; i++){
        cin >> x;
        m[x]++;
    }

    int c=0;

    map<string, int>::iterator it;

    for(it=m.begin(); it!=m.end();it++){
        if((*it).second == 3){
            c++;
        }
    }

cout << c << endl;
}