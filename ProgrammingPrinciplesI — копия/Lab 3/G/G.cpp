#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long max = -1000000000;
    long min = 1000000000;
    int a;

    int numbers[n];

    for(int i = 0; i < n; i++) 
    {
        
cin >> numbers[i];

    }
  for(int i = 0; i < n; i++){
      if(numbers[i]<min){
          min = numbers[i];          
      }

      if(numbers[i]>max){
          max = numbers[i];
          a = i;
      }
  }

  numbers[a] = min;

  for(int i = 0; i < n; i++){
      cout << numbers[i]<< " ";
  }

    return 0;
}