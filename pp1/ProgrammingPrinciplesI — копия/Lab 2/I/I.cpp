#include <iostream>

using namespace std;

int main()
{
    int n;
    int a =0;

    int o=0;
    cin >> n;

    int* numbers = new int[n];

    for(int i = 0; i < n; i++) 
    {
        
cin >> numbers[i];

    }

for(int i = 0; i < n; i++){

    if(numbers[i]%10 == 7){
o = o + 1;
    }
}
 cout<< o;
    return 0;
}