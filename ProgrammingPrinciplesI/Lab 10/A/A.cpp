#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string names[n];
    int points[n];

    for(int i = 0; i < n; i++){
        cin>>names[i];
        cin>>points[i];
    }

    sort(names,names+n);
    sort(points,points+n);

    for(int i = 0; i < n; i++){
        cout<<names[i]<<" "<<points[i]<<endl;
    }
}