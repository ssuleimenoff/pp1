#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b, int c){
stack<int> d;

for(int i=2; i<=a; i++){
    if(a%i == 0 and b%i == 0){
        d.push(i);
    }
}

for(int i=1; i<c; i++){
    d.pop();
}
if(!d.empty()){
return d.top();
}else{
    return 1;
}

}






int main(){
    
    int x,y,k;
    cin >> x >> y >> k;
    cout << lcm(x,y,k);

}