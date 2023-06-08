#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <string>
#include <iterator>
#include <algorithm>
#include <deque>
using namespace std;
int main(){
    int n;
    cin >> n;
    deque <int> v(n);
    while(!v.empty()){
        v.pop_front();
    }
    cout << "Empty! " << endl;

    return 0;

}