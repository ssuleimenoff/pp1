
#include <bits/stdc++.h>
using namespace std;
int  a[1083];

string cheating(int n, int k, int * a,int cnt = 1){
    sort(a, a + n);
    if((a[n-cnt] - a[n- cnt - 1]) < k) return "cheater";
    
    if(cnt == n - 1) return "no";
    return cheating(n, k, a, cnt + 1);
}

int main(){
    int n, k;
    cin >> n >> k;

    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    cout << cheating(n, k, a);
}