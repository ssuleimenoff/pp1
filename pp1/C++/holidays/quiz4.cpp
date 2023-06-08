#include <iostream>
using namespace std;
string win(string a, string b){
if((a=="paper"&&b=="rock")||(a=="rock"&&b=="scissors")||(a=="scissors"&&b=="paper")||
    (a=="Paper"&&b=="Rock")||(a=="Rock"&&b=="Scissors")||(a=="Scissors"&&b=="Paper")){
        cout<<"player 1 win";
    }
    else{
        cout<<"player 2 win";
    }
}

int main() {
    string a,b;
    cin>>a>>b;
    win(a,b);
}