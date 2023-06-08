#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string a;
    cin >> n;

    map<string, int> m;

    for(int i=1; i<n+1; i++){
        cin >> a;
        m.insert(make_pair(a,i));
    }
    map<string, int>::iterator it;

    for(it=m.begin(); it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}