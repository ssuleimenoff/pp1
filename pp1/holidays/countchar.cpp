#include <bits/stdc++.h>
using namespace std;
int main(){
  vector <string> words;
  string s;
  while(1){
    cin >> s;
    if(s[s.length() - 1] == '0'){
      words.push_back(s);
      break;
    }
    words.push_back(s);
  }
  vector <int> counts;
  for(int i=0;i<words.size();i++){
    int cnt = 0;
    char needtocount;
    cin >> needtocount;
    for(int j=0;j<words[i].size();j++){
      if(needtocount == words[i][j]){
        cnt++;
    }
    }
    counts.push_back(cnt);
  }
  for(int i=0;i<counts.size();i++){
    cout << counts[i] << endl;
  }
}