#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
    map <string , int> m;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        string s;
        cin >> s;
        m.insert(make_pair(s,i));
    }
    for (auto i:m){
        cout << i.first << " " << i.second << endl;
    }
}