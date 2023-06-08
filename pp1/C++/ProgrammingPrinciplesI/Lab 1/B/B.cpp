#include <iostream>
using namespace std;
int main(){
int n;
int k;
int t;
int a;
int b;

cin >> n >> k;

a = (k%1000)/100;
b = k%10;
t = n +a +b;
cout << t;
    return 0;
}