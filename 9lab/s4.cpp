#include <bits/stdc++.h>
using namespace std;
long long gen(){
     static int  i = -1;
    i++;
    return powl(i,i);
}
int main(){
    int n;
    cin >> n;
    vector<long long> v1(n+1);
    generate(v1.begin(), v1.end(), gen);
    for (auto it : v1) {
        cout << it << " ";
    }
    return 0;
}