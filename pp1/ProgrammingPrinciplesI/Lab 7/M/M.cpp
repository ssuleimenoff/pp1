#include <iostream>
using namespace std;


int set(int a, int b){
    if(a>0){
        cout << b+1-a << " ";
        return set(a-1, b);
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cin >> n;
    set(n, n);
}

