#include <bits/stdc++.h>
using namespace std;
string revnum(string s){
    stack <char> st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    while((int)st.top() == 48){
        st.pop();
    } 
    string s1 = "";
    while(!s.empty()){
        s1 +=to_string(st.top() - 48);
        st.pop();
    }
    return s1;
}
int numsums(string num1 , string num2){
    int l1 = num1.length();
    int l2 = num2.length();
    int n1 = 0;
    int n2 = 0;
    for(int i=0;i<l1;i++){
        n1 += (num1[l1-1-i] - 48)*pow(10 , i);
    }
    for(int i=0;i<l2;i++){
        n2 += (num2[l2-1-i] - 48)*pow(10 , i);
    }
    return n1+n2;
}
int main(){
    int n , sum;
    string num1, num2;
    cin >> n;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin >> num1 >> num2;
        num1 = revnum(num1);
        num2 = revnum(num2);
        sum = numsums(num1 ,num2);
        v.push_back(sum);
    }
    vector <int>::iterator it;
    string s1;
    for(it = v.begin(); it != v.end();it++){
        s1 = revnum(to_string(*it));
        cout << s1 << endl;
    }
    return 0;
}