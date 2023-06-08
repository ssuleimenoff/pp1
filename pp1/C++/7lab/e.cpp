#include <bits/stdc++.h>
using namespace std;

int uniquedevider(int n){
    int check = 1;
    if(n == 1) return 1;
    while(n > check) {
        check *= 2;
    }
    if(n == check) return 1;
    return 0;
}
int main(){
    int n;
    cin >> n;
    int power = uniquedevider(n);
    if(power == 1) cout << "Yes";
    else cout << "No";

}