#include <bits/stdc++.h>

using namespace std;

int x, y;
int a[123456], b[123546];

double sqr(int i){
	return(sqrt((x - a[i])*(x - a[i]) + (y - b[i])*(y - b[i])));
}

int main(){
	int n;
	cin >> x >> y >> n;
	
	
	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
	}
	
	int c[n];
	double l[n];
	for(int i = 0; i < n; i++){
		l[i] = sqr(i);
	}
	
	sort(l, l + n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(l[i] == sqr(j)){
				c[i] = j;
			}			
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << a[c[i]] << " " << b[c[i]] << endl;
	}
	
}