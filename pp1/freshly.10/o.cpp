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

vector<int> v;

void print(int n){
  string res = "";
  while(n != 0){
    res += '0' + (n % 2);
    n /= 2;
  }

  reverse(all(res));
  cout << res << endl;

}

int main(){ 
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    int x;
    cin >> x;

    v.pb(x);
  }

  for(auto it : v){
   print(it);
  }

}