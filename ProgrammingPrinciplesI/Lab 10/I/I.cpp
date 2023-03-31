#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,x;
    cin >> n;

    vector<int> v1;
    vector<int> v2;
        for(int i = 0; i < n; i++){
        cin >> x;
        v1.push_back(x);
        v2.push_back(x);
    }

    reverse(v2.begin(), v2.end());

    for(int i = 0; i < n; i++){
        if(v1[i]==v2[i]){
            cout << "OK"<<endl;
        }else{
            cout << "Instead of "<< v1[i] <<" here was " << v2[i]<<endl;
        }
    }
    

    return 0;
}
