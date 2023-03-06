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


    vector<int> :: reverse_iterator it;

    

    for(it=v.rbegin(); it!=v.rend(); it++){

        cout << *it <<" ";

    }

    return 0;
}