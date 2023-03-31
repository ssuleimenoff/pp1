#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s; 
    int a=0;
    for(int i=0; i<s.size(); i++){
    if (s[i]>='a' && s[i]<='z'){
      a+=2;
      
    }
    else if (s[i]>='A' && s[i]<='Z'){
     a+=3;
    
    }
    else if (s[i]>='0' && s[i]<='9' ){
    a+=4;

    }
    else if (s[i]=='@' || s[i]=='!' || s[i]=='/' || s[i]=='+' || s[i]=='-' || s[i]=='*'){
        a+=5;
    
    }
    else if (s.size()>=8){
        a+=1;
        
    }
    }
    
    
    cout << a;}