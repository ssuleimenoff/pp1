#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, res;
	
	int mx = 0;
	while(cin >> s){
		if(mx < s.size()){
			mx = s.size();
			res = s;
		}
	}
	
	cout << res << endl << mx;
}
