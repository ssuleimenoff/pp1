#include <bits/stdc++.h>
using namespace std;
int main(){

int Cap, Low = 0;
string text;

cin >> text;

for(int i = 0; i < text.size(); i++){

    if(isupper(text[i])){

        Cap++;
        
    }else{
        Low++;
    }
    
}

cout<<Low <<" "<<Cap;
}