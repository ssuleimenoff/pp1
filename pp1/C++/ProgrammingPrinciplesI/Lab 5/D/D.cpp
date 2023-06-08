#include <bits/stdc++.h>
using namespace std;
int main(){

    string str;
    int l,r;
    string a = "YES";

    cin >> str;
    l=0;
    r=str.size()-1;

    for(l=0; l<r; l++){

        if(str[l]!=str[r]){

            a="NO";

        }
        r--;

    }

    cout << a << endl;

}