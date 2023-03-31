#include <bits/stdc++.h>
using namespace std;

int main(){
    int dec , rem , product = 1;
    string hextodec = "";
    cin >> dec;
    while(dec != 0){
        rem = dec % 16;
        char ch;
        if(rem >= 10)
        ch = rem + 55;
        else 
        ch = rem + 48;
        hextodec += ch;

        dec = dec / 16;
        product *= 10;
    }
    reverse(hextodec.begin() , hextodec.end());
    cout << hextodec << endl;
}