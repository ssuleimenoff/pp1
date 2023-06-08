#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,x,k;
    cin >> n >>k;

    vector<int> v2;
        for(int i = 0; i < n; i++){
        cin >> x;
        v2.push_back(x);
    }


    rotate(v2.begin(),v2.begin()+k, v2.end());
    reverse(v2.begin(), v2.end());

    vector<int>::iterator it;

    for(it=v2.begin();it!=v2.end();it++){
        cout << *it << " ";
    }

    return 0;
}
