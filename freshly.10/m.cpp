#include <bits/stdc++.h>
#define ll long long;
#define ld long double;
#define ull insigned ll
#define F fisrt
#define S second
#define pb push_back
#define ppb pop_back
#define sz(x) x.size()
#define all(x) x.begin() , x.end()
using namespace std;
const int N = 1e5;
int a[N], b[N];
bool awas[N], bwas[N];

vector<int> v;

vector<int> v1;
vector<int> v2;

int ord;

int main(){
  int n, m;
  cin >> n >> m;

  for(int i = 0; i < n; i++){
    int x;
    cin >> x;

    v1.pb(x);
  }

  for(int i = 0; i < m; i++){
    int x;
    cin >> x;

    v2.pb(x);
  }

  v1.erase(unique(all(v1)), v1.end());
  v2.erase(unique(all(v2)), v2.end());

  int id = v1.size(), id1 = v2.size();

  if(id > id1) ord = 1;
  else if(id1 > id) ord = 2;

  for(int i = 0; i < min(id, id1); i++){
    v.pb(v1[i]);
    v.pb(v2[i]);
  }

  if(ord != 0){
    if(ord == 1) v.pb(v1[id - 1]);
    if(ord == 2) v.pb(v2[id1 - 1]);
  }


  for(int i = 0; i < v.size(); i++){
    if(v[i] == v[i+1] and i != v.size() - 1) continue;
    cout << v[i] << ' ';
  }

}
