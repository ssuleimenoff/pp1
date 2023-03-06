#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string a;
    int b;

    map<string, int> m;
    for(int i=0; i<n; i++){
        cin >> a>>b;

        if(m[a]>0){
            m[a] = m[a]+b;
        }else{
            m[a] = b;
        }
    }

    map<string, int>::iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}