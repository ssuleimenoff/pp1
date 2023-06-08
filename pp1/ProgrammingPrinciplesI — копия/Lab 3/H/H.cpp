#include <iostream>

using namespace std;

int main()
{
    long n,l,r;
    cin >> n>>l>>r;
    long sum=0;

    long numbers[n+1];

    numbers[n]=0;

    for(long i = 0; i < n; i++) 
    {
        
cin >> numbers[i];

    }






    for(long i = l-1; i < r; i++) {
        sum = sum + numbers[i];
    }







    cout << sum << endl;
    return 0;

}