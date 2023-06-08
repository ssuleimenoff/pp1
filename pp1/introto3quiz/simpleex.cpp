#include <bits/stdc++.h>
using namespace std;

long long sum=0,sum1=0,cnt=0,cnt1=0;

int main(){
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        
        if(a%2==0){
            sum+=a;
            cnt++;
        }
        else{
            sum1+=a;
            cnt1++;
            
        }
    }
    cout << "Left hand magic power: " << sum*cnt << endl;
    cout << "Right hand magic power: " << sum1*cnt1 ;
}