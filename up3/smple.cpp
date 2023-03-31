#include <iostream>


using namespace std;

string isTruth(string word){
    for(int i = 0; i < word.length(); i++){
        if(word[i] >= 48 && word[i] <= 57){
            return "";
        }
    }
    return word;
}


int main(){
    string s;
    getline(cin, s);
    string word="";
    for(int i = 0; i <= s.length(); i++){
        if(s[i] == ' ' || i == s.length()){
            string output = isTruth(word);
            word = "";
            if(output != ""){
                cout << output << endl;
            }
        }else{
            word+=s[i];
        }
    }
}