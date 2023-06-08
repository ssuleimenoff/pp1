#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v;

    int n,a;
    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> a;
        v.push_back(a);

    }


    vector<int> :: iterator it;

    sort(v.begin(),v.end());

    for(it=v.begin(); it != v.end();it++){

        cout << *it <<" ";

    }

    return 0;
}