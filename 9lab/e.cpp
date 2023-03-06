#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> a(n);
    int cnt = 0, cnt1 = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cnt1 = 0;
        for(int j=0;j<n;j++){
            if(a[i] == a[j]){
                cnt1++;
            }
        }
        if(cnt1 == 3){
            cnt++;
        }
    }
    cout << cnt / 3;
}