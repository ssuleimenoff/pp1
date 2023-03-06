#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    double evensum = 0, oddsum = 0, oddcnt = 0, evencnt = 0;
    for(int i=1;i<=n;i++){
        if(a[i]%2==0){
            cin >> a[i];
            evensum += a[i];
            evencnt++;
        }
        else {
            oddsum += a[i];
            oddcnt++;
        }
    }
    double avgodd = oddsum/oddcnt;
    double avgeven = evensum/evencnt;
    cout << avgodd << endl;
    cout << avgeven << endl;
}