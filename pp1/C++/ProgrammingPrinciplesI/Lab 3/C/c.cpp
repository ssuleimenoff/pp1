#include <iostream>

using namespace std;

int main()
{
    int n;
    int a=-10000000;
    cin >> n;

    int numbers[n];

    for(int i = 0; i < n; i++) 
    {
        
cin >> numbers[i];

    }

for(int i = 0; i < n; i++){

    if(numbers[i] > a){

        a = numbers[i];

    }
}
 cout << a;
    return 0;
}