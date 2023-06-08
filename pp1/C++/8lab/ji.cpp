#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {1, 2 , 3 ,4};
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.shrink_to_fit();
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;
    
}