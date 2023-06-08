#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <pair<string, int>, bool> dic;
    map <pair<string, int>, bool>::iterator it;
    for(int i=0;i<n;i++){
        string  name1 , name2 , temp = "";
        int score1 , score2 , all = 0;
        cin >> name1 >> score1 >> name2 >> score2;
        all = score1 + score2;
        temp = name1 + " and " + name2;
        dic[make_pair(temp , all)] = true;

    }
    for(it = dic.begin() ; it != dic.end();it++){
        cout << it->first.first << " " << it->first.second << endl;
    }
}