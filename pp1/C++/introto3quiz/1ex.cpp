#include <iostream>             
#include <cmath>

using namespace std;

int main(){
    string s;
    int n;
    cin >> s >> n;
    for(int i=0; i<s.size(); i++){
        if(s[i]-64>n){
        s[i]=s[i]-n;}
        else{
            s[i]=s[i]+(26-n);
        }
    }
    cout << s;
}
