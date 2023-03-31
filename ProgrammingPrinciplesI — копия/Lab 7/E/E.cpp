
#include <bits/stdc++.h>
using namespace std;

string check(int a){

    if(a==1) return "Yes";
    if(a%2==1) return "No";

    return check(a/2);
}

int main(){

    int n;
    cin >> n;
    cout << check(n) << endl;

}
