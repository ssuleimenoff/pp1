#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    map<string, set<int> > m;
    string a;
    int b;

    for(int i=0; i<n; i++){
        cin >> a;
        cin >> b;

        m[a].insert(b);

    }

    map<string, set<int> > :: iterator it;

    for(it=m.begin();it!=m.end();it++){
        cout << it->first << " ";
        if(it->second.size()>=3){
            cout << "+1"<<endl;
        }else{
            cout<<"NO BONUS"<<endl;
        }
    }

}