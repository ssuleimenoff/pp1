#include <iostream>             //??????????
#include <cmath>

using namespace std;

int main(){
    string s, t;
    int x, y;
    cin >> s >> x >> y;
    /*for(int i=0; i<s.size(); i++){
        if(x-y!=0){
            if(x<=i && y>i){
                t+=s[i];


            }
        }
        if(x-y==0){
            t+=s[i];
        }
    }
    cout << t;*/
    for(int i=0; i<x-1; i++){
        t+=s[i];
        
    }
    for(int i=y-1; i>=x-1; i--){
        t+=s[i];
    }
    for(int i=y; i<s.size(); i++){
        t+=s[i];
    }
    cout << t;
    
}
