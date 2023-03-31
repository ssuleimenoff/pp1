#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <pair < string , string >> vt;
    vector <pair < string , string >> v1;
    int n;
    cin >> n;
    string name , surname;
    for(int i=0;i<n;i++){
        cin >> name >> surname;
        vt.push_back(make_pair(name , surname));
    }
    for(auto i:vt){
        cout << i.first<<" "<< i.second<<endl;
        cout << 
    }
}