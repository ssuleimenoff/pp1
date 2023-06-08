#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,x;
    cin >> n;
    vector<int> v;

    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    vector<int> :: iterator it;

    int sum = 0;

    int k;
    cin>>k;

    for(it=v.end()-k; it!=v.end();it++){

        sum = sum + *it;

    }

    cout<<sum<<endl;
    
}