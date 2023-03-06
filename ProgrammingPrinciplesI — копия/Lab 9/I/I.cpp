#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string a;
    map<string, int> m;


    for(int i = 0; i < n; i++){
        cin >> a;
        if(m[a]==1){
            cout << "user already exists"<<endl;
        }else{
            cout << "new user added" << endl;
        }
    m[a]=1;

    }


}