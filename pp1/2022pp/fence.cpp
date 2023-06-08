#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , curr , count = 1;
    cin >> n;
    stack <int> s;
    for(int i=0;i<n;i++){
        cin >> curr;
        s.push(curr);
    }
    curr = s.top();
    s.pop();
    while(!s.empty()){
        if(curr <s.top()){
            curr = s.top();
            count++;
        }
        s.pop();
    }
    cout << count ;
    return 0;
}