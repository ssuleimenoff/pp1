#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a;
    vector <int> rev;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
        rev.push_back(x);
    }
    reverse(rev.begin() , rev.end());
    for(int i=0;i<n;i++){
        if(a[i] == rev[i]){
            cout << "OK" << endl;
        }
        else {
            cout << "Instead of " << a[i] << " here was " << rev[i] << endl;
        }
    }
}
     