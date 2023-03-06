#include <bits/stdc++.h>


using namespace std;

int m, x, y, z;

void isValid(vector<int> v){
  for(int i = 0; i < v.size(); i++){
    while(v[i] % x == 0 or v[i] % y == 0 or v[i] % z == 0){
        if(v[i] % x == 0) v[i] /= x;
        if(v[i] % y == 0) v[i] /= y;
        if(v[i] % z == 0) v[i] /= z;
    }
  }

  if(equal(v.begin() + 1, v.end(), v.begin())) cout << "She can" << '\n';
  else cout << "She can't" << '\n';
}

int main(){ 
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> m >> x >> y >>z;

    vector<int> v;
    for(int i = 0; i < m; i++){
      int x;
      cin >> x;
      v.push_back(x);
    }

    isValid(v);
  }

}