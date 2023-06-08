#include <bits/stdc++.h>
using namespace std;

map<string, bool> was;

int main(){ 
  string s;
  cin >> s;

  int res = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] >= 'a' and s[i] <= 'z' and !was["lowercase"]){
      res += 2;
      was["lowercase"] = true;
    }

    if(s[i] >= 'A' and s[i] < 'Z' and !was["capital"]){
      res += 3;
      was["capital"] = true;
    }

    if(isdigit(s[i]) and !was["number"]){
      res += 4;
      was["number"] = true;
    }

    if(!was["symbol"]){
      if(s[i] == '!' or s[i] == '?' or s[i] == '/' or s[i] == '@' or s[i] == '+' or s[i] == '-' or s[i] == '*'){
        res += 5;
        was["symbol"] = true;
      }
    }
  }

  if(s.size() >= 8) res += 1;
  cout << res;
}