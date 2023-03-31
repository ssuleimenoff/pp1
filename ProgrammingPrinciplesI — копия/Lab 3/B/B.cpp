#include <iostream>
using namespace std;
int main(){
int n;
int a = 0;

cin >> n;
int num[n];

for(int i=0; i<n; i++){
cin >> num[i];
}

for(int i=0; i<n; i++){
if(num[i]>0){
    a++;
}
}
cout << a << endl;
return 0;
}