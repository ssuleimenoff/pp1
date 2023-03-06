#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    string s;
    set <char> a;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
    for(int i = 0; i < s.length(); i++){
        a.insert(s[i]);
    }
    cout << a.size() << endl;
    for(auto now: a){
        cout << now << " ";
    }
}