#include <bits/stdc++.h>
using namespace std;
map <string , bool> permutations;
map <int , bool> insertedInts;

void logoutVector(vector <int> input){
    vector <int>::iterator it;
    string permutation="";
    for(it = input.begin(); it != input.end(); it++){
        permutation += to_string(*it);
        permutation += " ";
    }
    if(!permutations[permutation]){
        for(it = input.begin(); it != input.end(); it++){
            cout << *it << " ";
          }
          permutations[permutation] = true;
          cout << endl;
    }
}
int main(){
    int size;
    cin >> size;
    vector <int> input;
    for(int i=0;i<size;i++){
        int el;
        cin >> el;
        if(!insertedInts[el]){
            input.push_back(el);
        }
        insertedInts[el] = true;
    }
    do {
        logoutVector(input);
    }
    while(next_permutation(input.begin() , input.end()) );
}
