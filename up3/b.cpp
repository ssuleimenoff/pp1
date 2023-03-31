#include <bits/stdc++.h>
using namespace std;

int main(){
    char letter;
    string name;
    cin >> letter;
    cin >> name;
    for(int i=0;i<name.length();i++){
        if(name[i] != letter){
            cout << name[i];
        }
    }

}