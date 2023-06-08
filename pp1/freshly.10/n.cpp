#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define ull unsigned ll

#define F first
#define S second

#define pb push_back
#define ppb pop_back

#define sz(x) x.size()
#define all(x) x.begin(),x.end()

using namespace std;

const int N = 1e5;
int cnt[N], odds;

set<int> st;
set<int> res;
vector<int> v;
vector<int> v1;
map <int, int> mp;

int main(){
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    int x;
    cin >> x;

    mp[x]++;
    st.insert(x);
  }


  set<int>::iterator it;
  for(it = st.begin(); it != st.end(); it++){
    if(mp[*it] == 2){
      res.insert(*it);
    }

    else{
      odds++;
      if(odds > 1){
        cout << "Impossible";
        return 0;
      }
      v1.pb(*it);
    }
  
  }
  for(it = res.begin(); it != res.end(); it++) v.pb(*it);
 
  
  
  for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
  
  for(int i = 0; i < v1.size(); i++) cout << v1[0] << ' ';

  reverse(all(v));

  for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
  
  


}