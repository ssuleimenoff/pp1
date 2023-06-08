#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    set <int> s;
    map <int , int > e;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] > 0) cnt++;
        }
        s.insert(cnt);
        e[cnt] = i + 1;
        cnt = 0;
    }
    if(s.size() == 1) cout << "numbers are equal";
    else cout << e.rbegin()->second;
}
