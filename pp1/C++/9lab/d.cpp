#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <deque>
#include <utility>
using namespace std;

int main(){
    int n , k;
    cin >> n >> k;
    queue <int> q;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x == k){
            q.push(x);
        }

    }
    cout << q.size();
}