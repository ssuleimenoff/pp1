#include <bits/stdc++.h>
using namespace std;
int main(){
    map <int , int> m;
    map <int , int> ::iterator it;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        m[a[i]] ++;
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(m[a[i]^a[j]] > 0) sum++;
        }
    }
    cout << sum;
    return 0;
}