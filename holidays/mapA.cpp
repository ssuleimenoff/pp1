#include <bits/stdc++.h>
using namespace std;
map <string, string> country;
map <string , bool> cond;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string ctr, city;
        cin >> ctr;
        while(cin >> city){
            if(city == "0") break;
            country[city] = ctr;
            cond[city] = true;
        }
    }
    cin >> n;
    for(int i=0;i<n;i++){
        string town;
        cin >> town;
        if(cond[town]) cout << country[town] << endl;
        else cout << "Unknown" << endl;
    }
}