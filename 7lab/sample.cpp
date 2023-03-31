#include <bits/stdc++.h>
using namespace std;
int sum(int num){
    if(num != 0){
        return num + sum(num - 1);
    }
    return 0;
}
int main(){
    int num;
    cin >> num;
    cout << sum(num);
    
    return 0;
}