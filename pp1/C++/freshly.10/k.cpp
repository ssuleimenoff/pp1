#include <bits/stdc++.h>
using namespace std;
bool isPrime(int siu){
    if(siu == -1 || siu == 1 || siu == 0){
        return false;
    }

    for(int j = 2; j <= sqrt(abs(siu)); j++){
        if(abs(siu) % j == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int size;
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int cnt = count_if(arr, arr+size, isPrime);

    
    cout << cnt;
    return 0;

}