#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    
    string a = "Yes";
// n = 5;

    for(int i = 2; i < n; i++){
// 5%2 != 0
// 5%3 != 0
// 5%4 != 0

// 5 is prime




//n = 9;
//9%2 !=0
//9%3=0
//9%4!=0

//a = "No";
        if(n%i==0){
            a = "No";
        }

    }

    cout << a << endl;
}