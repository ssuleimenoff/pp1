#include <bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin >> s;
    int b = 1, n = 2;
    while(true){
        if(s > 0 && s - b <= 0){
            cout << "BOB";
            return 0;
        }
        else s -=b;
        if(s > 0 && s - n <= 0){
            cout << "NELSON";
            return 0;
        }
        else s -= n;
        b++;
        n = b * 2;
    }
}