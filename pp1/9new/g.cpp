#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack <char> st;
    for(int i=0;i<s.size();i++){
        if(!st.size()){
            st.push(s[i]);
        }
        else if(st.top() == '1' && s[i] == '1'){
            st.pop();
        }
        else st.push(s[i]);
    }
    string ans = "";
    while(st.size()){
        ans += st.top();
        st.pop();
    }
    for(int i = ans.size() - 1 ;i>= 0;i--){
        cout << ans[i];
    }
}