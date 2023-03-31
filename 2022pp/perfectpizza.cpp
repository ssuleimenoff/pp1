#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string curring , firsting , seconding , targeting ;
    cin >> n;
    map <string , int> shop;
    for(int i=0;i<n;i++){
        cin >> curring;
        shop[curring]++;
    }
    cin >> n;
    vector <pair <string , string >> ingpairs;
    vector <string > shoppinglist;
    for(int i=0;i<n;i++){
        cin >> firsting >> seconding;
        ingpairs.push_back(make_pair(firsting , seconding));
    }
    cin >> targeting;
    vector <pair <string , string >> ::iterator it;
    for(it = ingpairs.begin();it != ingpairs.end(); it++){
        if(it->first == targeting){
            if(shop.count(it->second) > 0){
                shoppinglist.push_back(it->second);
            }
        }
        if(it->second == targeting){
            if(shop.count(it->first) > 0){
                shoppinglist.push_back(it->first);
            }
        }
    }
    sort(shoppinglist.begin() ,shoppinglist.end());
    vector <string>::iterator it1;
    cout << shoppinglist.size() << endl;
    for(it1 = shoppinglist.begin(); it1 != shoppinglist.end();it1++){
        cout << *it1 << " ";
    }
    return 0;
}