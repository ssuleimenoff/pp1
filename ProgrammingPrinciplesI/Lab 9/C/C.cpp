#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,x;
    cin >> n;

    map <int,int> m;

    for(int i=0;i<n;i++){
        cin>>x;
        m[x]++;
    }

    int c = 0;

    map <int,int>::iterator it;

    for(it=m.begin();it!=m.end();it++){
        if((*it).second >1){
            c++;
        }
    }

    cout << c << endl;

    return 0;
}