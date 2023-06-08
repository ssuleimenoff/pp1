#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v;

    int n,x,a,b;
    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> x;
        v.push_back(x);

    }

    cin>>a>>b;

    vector<int> :: iterator it;

    

    for(it=v.begin(); it!=v.begin()+a;it++){

        cout << *it <<" ";

    }//before



    for(it=v.begin()+b; it!=v.begin()+a-1;it--){

        cout << *it <<" ";

    }//in


    
    for(it=v.begin()+b+1; it!=v.end();it++){

        cout << *it <<" ";

    }//after

    return 0;
}