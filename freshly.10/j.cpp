#include <bits/stdc++.h>
using namespace std; //nurs - chert
int main(){
    int n , k;
    cin >> n >> k;
    vector <int> a;
    vector <int> rev;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
        rev.push_back(x);
    }
    rotate(a.begin() , a.begin() + k , a.end());
    reverse(a.begin() , a.end());
    for(auto now :a){
        cout << now << " ";
    }

}