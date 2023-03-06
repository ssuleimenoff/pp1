#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    set <int> s;
    map <int,int> mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] > 0) cnt++;
        }
        s.insert(cnt);
        mp[cnt] = i + 1;
        cnt = 0;
    }
    if(s.size() == 1) cout << "Numbers are equal";
    else cout << mp.rbegin()->second;
}