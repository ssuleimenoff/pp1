#include <bits/stdc++.h>
using namespace std;

int main()
{
 int i = 1;
 string s;
 map<char,int>m;
 map<char,int>::iterator it;
 getline(cin,s);
 for(int j = 0; j < s.size(); j++)
 {
  if(s[j]!=' ') m[s[j]]++;
 }
 for(it=m.begin(); it!=m.end(); ++it)
 {
  if(i%2!=0) cout<<it->first<<" "<<it->second<<endl;
  else cout<<it->second<<" "<<it->first<<endl;
  i++;
 }
}