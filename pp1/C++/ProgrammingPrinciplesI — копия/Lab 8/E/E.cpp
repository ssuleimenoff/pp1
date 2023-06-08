#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,x,a,b;

    cin >> n;

    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }

    cin>> a >> b;
    
    vector<int> :: iterator it;

    v.erase(v.begin()+a, v.begin()+b+1);

    for(it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}