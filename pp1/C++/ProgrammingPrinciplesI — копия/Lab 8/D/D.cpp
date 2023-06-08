
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,x;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++){

        cin>>x;
        v.push_back(x);

    }

    int k;
    cin>>k;

    

    vector<int> :: iterator it;

    v.erase(v.begin()+k);

    for(it = v.begin(); it != v.end();it++){
        
        cout<< *it <<" ";

    }

    return 0;
}