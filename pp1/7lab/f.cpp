#include <bits/stdc++.h>
using namespace std;

int findeven(string num){
    int cnt = 0;
    for(int i=0;i<num.length();i++){
        int n = (int)num[i] - 48;
        if(n % 2 == 0) cnt++;
    }
    return cnt;
}
int main(){
    string num;
    cin >> num;
    cout << findeven(num);
}