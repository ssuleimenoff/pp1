#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    int n;
    while(cin >> n){
        if(n==0) break;
        vec.push_back(n);
    }
    if((vec.size()%2) == 1){
        for (int i = 0; i < vec.size()/2; i++){
            cout << vec[i] + vec[vec.size()-1-i] << ' ';
        }
        cout << vec[vec.size() / 2];
    }
    else{
        for (int i = 0; i < vec.size()/2; i++){
            cout << vec[i] + vec[vec.size()-1-i] << ' ';
        }
    }
}