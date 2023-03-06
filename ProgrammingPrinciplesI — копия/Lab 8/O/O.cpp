#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char> a;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if(s[i]<96){
            s[i]=s[i]+32;
        }
        
        a.insert(s[i]);
    }
    cout << a.size() << endl;
    set<char>::iterator it;

    for (it = a.begin(); it != a.end(); it++){
        cout << *it << " ";
    }
    

}