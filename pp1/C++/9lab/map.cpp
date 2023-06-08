#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main(){
    map <string , vector < string>> s;
    s["vasya"] = { "12312" , "13231"};
    for(auto now : s["vasya"]){
        cout << now << " ";
    }
    
    }

