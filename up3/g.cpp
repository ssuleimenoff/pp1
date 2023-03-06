#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    int n;
    cin >> n;
    vector <char> z;
    for(int i=0;i<n;i++){
        char x;
        cin >> x;
        z.push_back(x);
    }
    sort(z.begin() , z.end());
    for(int i=0;i<n;i++){
        int cnt  = 0;
        for(int j=0;j<s.length();j++){
            if(z[i] == s[j]){
                cnt++;
            }
        }
        cout << z[i] << " - " << cnt << endl;
    }
}