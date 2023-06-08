#include <bits/stdc++.h>
using namespace std;

int even(int a, int i, string l){

    if(i == l.length()){
        return a;
    }

    if((l[i]-48)%2==0){
        return even(a+1, i+1, l);
    }
    return even(a, i+1, l);

}


int main(){

    string n;
    cin >> n;
    cout << even(0,0,n);


}
