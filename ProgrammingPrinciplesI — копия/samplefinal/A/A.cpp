#include <bits/stdc++.h>
using namespace std;
int numn(int a, int b) { 

if(a<10) {
    return a;
    b=0;
    }
else b = 1;

int c = 0;
while(a>0){
    c = c + a%10;
    a= a/10;
}

if(c>9){
    return numn(c,b);
    b++;
}


return c;
}


int numc(int a, int b) { 

if(a<=9) {
    return b;
    b=0;
    }

else b++;

int c = 0;
while(a>0){
    c = c + a%10;
    a= a/10;
}

if(c>9){
    return numc(c,b);
}


return b;
}

int main(){

    int a;
    cin >> a;
    cout << numn(a, 0)<<" "<<numc(a, 0);



    return 0;
}