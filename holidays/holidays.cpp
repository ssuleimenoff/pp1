#include <bits/stdc++.h>
using namespace std;
int main(){
    string d[7] = {"SUN" , "MON" , "TUE" , "WED" , "THU" , "FRI" , "SAT" };
    string s;
    cin >> s;
    for(int i=1;i<7;i++){
        if(d[i] == s){
            cout << 7-i << endl;
            break;
        }
        
    }

}