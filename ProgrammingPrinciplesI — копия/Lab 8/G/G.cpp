#include <bits/stdc++.h>
using namespace std;

bool isPrime(int l){
    for (int i=l-1; i>1; i--){
        if (l%i==0){
            return false;
        }
    }
    return true;
}






int main()
{
    int n, x;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }




    int c =0;
    int k;
    cin >> k;

    vector<int> :: iterator it;

    for(it=v.begin(); it<v.end(); it++){
        if(isPrime(*it) && *it>=k){
            c++;
        }
    }
    cout << c;
}