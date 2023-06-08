#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue <string> q;
    vector <string> a;
    for(int i = 0; i < n; i++){
        int type;
        cin >> type;
        if(type == 1){
            string name;
            cin >> name;
            q.push(name);
        }
        else q.pop();
        if(q.empty()){
            cout << "queue is empty" << endl;
        }
        else cout << q.front() << endl;
    }
}