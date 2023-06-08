#include <bits/stdc++.h>
using namespace std;
int main(){
    int days , all = 0;
    cin >> days;
    unordered_map <string , int> dic;
    for(int i=0;i<days;i++){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            string city;
            int ppl;
            cin >> city >> ppl;
            if(dic.empty()){
                dic[city] = ppl;
            }
            else {
                dic[city] += ppl;
            }
            all += ppl;
        }
    }
    multiset <pair<string , double>> forsort;
    for(auto now : dic){
        forsort.insert(make_pair(now.first , now.second));
    }
    for(auto now : forsort){
        cout << now.first << " " << (now.second / all) *100 << endl;
    }
}