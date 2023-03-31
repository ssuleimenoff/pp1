#include <iostream>
#include <string>
using namespace std;

string del(string str){
    for(int i =0; i<str.size(); i++){
        if(str[i]!='!'){
           cout<<str[i];
        }
    }
return str;
}

int main(){
   string str;
   getline(cin,str);
   del(str);
}