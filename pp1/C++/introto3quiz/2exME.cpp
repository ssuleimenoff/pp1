#include <bits/stdc++.h>
using namespace std;

int main()
{
	string q;
	cin >> q;
	int a, b;
	cin >> a >> b;
	int z=0;
	for(int i=a;i<=(a+b)/2;i++)
	{
		swap(q[i-1], q[b-z-1]);
		z++;
	}
	cout << q;
}
