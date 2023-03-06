#include <iostream>
#include <string>
using namespace std;

string ToUpper(string str){
    for(int i =0; i<str.size(); i++){
        if(str[i]>=65&&str[i]<=90){
            cout<<char(str[i]+32);
        }
        else{
            cout<<char(str[i]-32);
        }
    }
}

int main(){
   string str;
   getline(cin,str);
   ToUpper(str);
}