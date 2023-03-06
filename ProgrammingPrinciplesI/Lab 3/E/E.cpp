#include <iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;
    long sum=0;

    long numbers[n];

    for(long i = 0; i < n; i++) 
    {
        
cin >> numbers[i];
sum = sum + numbers[i];

    }
 cout << sum;
    return 0;
}