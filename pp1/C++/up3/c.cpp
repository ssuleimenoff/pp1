#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int remainder = a % b;
    if(remainder == 0){
        return b;
    }
    else {
        return gcd(b , remainder);
    }
}
int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    vector <int> nodes;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            nodes.push_back(gcd(a[i] , a[j]));
        }
    }
    sort(nodes.begin() , nodes.end());
    int max = nodes.size();
    cout << nodes[max - 1];
    return 0;
}