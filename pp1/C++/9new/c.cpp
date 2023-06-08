#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a;
    for(int i=0;i<n;i++){
        int x;
    cin >> x;
    a.push_back(x);
}
sort(a.begin() , a.end());
int cnt = 0;
vector <int> b;
for( int i=0;i<n;i++){
    if(a[i] == a[i-1]) cnt++;
    else if(a[i] != a[i-1]){
        if(cnt > 0) b.push_back(cnt);
        cnt = 0;
    }
}
if(cnt > 0) b.push_back(cnt);
cout << b.size();
}