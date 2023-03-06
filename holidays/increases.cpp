#include <bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int main(){
  int n;
  cin >> n;

  int a = 1;
  while(a <= n){
    int c = 1;
    for(int b = a; b <= n; b++, c++){
      arr[a][b] = c;
      arr[b][a] = c;
    }
    a++;
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      cout << arr[i][j] << ' ';
    }
    cout << endl;
  }
  
}