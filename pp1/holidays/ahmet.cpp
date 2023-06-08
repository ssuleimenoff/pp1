#include <bits/stdc++.h>
using namespace std;
int main(){
    const int size = 16;
    int a[size];
    int cnt = 0;

    for(int i = 0;i < size; i++){
        if(a[i] % 3 == 0){
            a[i] = 0;
            cnt++;
        }
    }
    cout << "The array with zeros: ";
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "The number of zeros in this array: " << cnt << endl;

    return 0;
}