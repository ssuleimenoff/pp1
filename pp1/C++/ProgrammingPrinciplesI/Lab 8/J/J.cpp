#include <bits/stdc++.h>
using namespace std;

int min(vector<int> v){

int a = v[0];

for(int i=0; i<v.size(); i++){
    if(v[i]<a){
        a = v[i];
    }
}

return a;

}

int max(vector<int> v){

   int a = v[0];

for(int i=0; i<v.size(); i++){
    if(v[i]>a){
        a = v[i];
    }
}

return a;

}

int main(){
    int n,x;
    cin >> n;
    vector<int> v;

    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    vector<int> :: iterator it;

    cout<<max(v)-min(v);


}