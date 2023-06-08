#include <bits/stdc++.h>
using namespace std;
int main(){
    string t1;
    string t2;
    cin >> t1 >> t2;

    int f = t1.find(t2);

    if (f>-1){
        cout << "YES";
    }else{
        cout << "NO";
    }
}