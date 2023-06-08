#include <bits/stdc++.h>
using namespace std;
vector <int> v1;
vector <string> v;
vector <int> right;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s; int x;
        cin >> s >> x;
        v.push_back(s);
        v1.push_back(x);
    }
    sort(v.begin() , v.end());
    sort(v1.begin() , v1.end());
    for(int i=0;i<n;i++){
        cout << v[i] << " " << v1[i] << endl;
    }


}