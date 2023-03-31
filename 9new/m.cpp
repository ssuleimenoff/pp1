#include <bits/stdc++.h>
using namespace std;
int main(){
    queue <string> s;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a==2){
            s.pop();
        }
        else {
            string st;
            cin >> st;
            s.push(st);
        }
        if(!s.empty()){
            cout << s.front() << endl;
        }
        else {
            cout << "queue is empty" << endl;
        }
    }
}