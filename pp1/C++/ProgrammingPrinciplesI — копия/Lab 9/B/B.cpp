#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {

    if(a%2==1 and b%2==0) return false; //Если А не четное и В четное     , то надо менять местами
    if(a%2==0 and b%2==1) return true;  //Если А четное и В не четное     , то не надо менять местами
    if(a%2==0 and b%2==0) return a > b; //Если А четное и В четное        , то отсортировать от большего к меньшему
    if(a%2==1 and b%2==1) return a < b; //Если А не четное и В не четное  , то отсортировать от меньшего к большему


}

int main(){

    vector<int> v;

    int n,x;
    cin >> n;

    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}