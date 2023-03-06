#include <iostream>

using namespace std;

int main()
{
    int n,l,r;
    int cache;
    cin >> n >> l >> r;
    l--;
    r--;
    int num[n];


    for (int i=0; i<n; i++){
        cin>>num[i];
    }


    for(int i = r; i>=l; i--){
        cache = num[i];
        num[i] = num[l];
        num[l] = cache;
        l++;

    }



    for(int i = 0; i<n; i++){
        cout<<num[i]<<" ";
    }


}