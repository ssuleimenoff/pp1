#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
  cin >> n;
    int a[100100];
    int b[100100];
    int c[100100];
    vector<int> vec;

  for(int i = 0; i < n; i++)
    cin >> a[i];
        
  for(int i = 0; i < n; i++){
    while(vec.size() > 0 && a[vec.back()] >= a[i])
      vec.pop_back();
    if(vec.size() > 0)
      b[i] = vec.back()+1;
    else b[i] = 0;
      vec.push_back(i);
  }
  vec.clear();
  for(int i = n-1; i >= 0; i--){
    while(vec.size() > 0 && a[vec.back()] >= a[i])
      vec.pop_back();
    if(vec.size() > 0) c[i] = vec.back()-1;
    else c[i] = n-1;
    vec.push_back(i);    
  }
  ll ans = 0;
  for(int i = 0; i < n; i++)
    ans = max(ans,a[i] * 1ll * (c[i] - b[i] + 1));
  cout << ans << endl;
  vec.clear();
  return 0;
}