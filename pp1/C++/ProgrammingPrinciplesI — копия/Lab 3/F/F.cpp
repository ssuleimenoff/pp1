#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int numbers[n];

    for(int i = 0; i < n; i++) 
    {
        
cin >> numbers[i];

    }




    for(int j = n-1; j > -1; j--) 
    {
        
    cout << numbers[j] << " ";

// 0 1 2 3 4; indexes
// 1 2 3 4 5; numbers

// 4 3 2 1 0; indexes
// 5 4 3 2 1; numbers
    }    

    return 0;
}