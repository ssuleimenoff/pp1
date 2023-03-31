#include <iostream>
using namespace std;
int n;
int k;
int a;
int main()
{

cin >> n >> k;

if(k>n){
    a = 2;
}else if((2*n)%k == 0){
a = 2*n/k;
}else{
    a = 2*n/k +1;
}


cout<<a<<endl;
return 0;
}