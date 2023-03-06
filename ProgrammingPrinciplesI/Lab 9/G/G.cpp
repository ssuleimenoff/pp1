#include <bits/stdc++.h>
using namespace std;



int main(){
    stack<char> a;
    string b;
    cin >> b;//100221->1001


    a.push(b[0]);//1

    for(int i=1; i<b.size(); i++){

        if(!a.empty()){

            if(a.top()=='1' && b[i]=='1'){

                a.pop();
                b[i]='2';
                b[i-1]='2';

            }else a.push(b[i]);

        }else a.push(b[i]);  

    }//loop end


for(int i=0; i<b.size(); i++){
    if(b[i]!='2'){
        cout<<b[i];
    }
}
}