#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    int sum = 0;
    cin>>n;
    set<int> s;

    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x);
    }

    set<int>::iterator it;

    for(it=s.begin();it!=s.end();it++){
        sum = sum + *it;
    }

    cout << sum;
}