#include <bits/stdc++.h>
using namespace std;
long long gen(){
    static int i = -1;
    i++;
    return powl(i , i);
}
int main(){
    int n;
    cin >> n;
    vector <long long> v(n + 1);
    generate(v.begin() , v.end() , gen);
    for(auto it : v){
        cout << it << " ";
    }
}