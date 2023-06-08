#include <iostream>

using namespace std;

int main()
{
    int n;
    int a =0;

    int o=0;
    int e=0;
    cin >> n;

    int* numbers = new int[n];

    for(int i = 0; i < n; i++) 
    {
        
cin >> numbers[i];

    }

for(int i = 0; i < n; i++){

    if(numbers[i]%2 == 0){

e = e+1;

    }else{
        o = o+1;
    }
}
 cout << e <<" "<< o;
    return 0;
}