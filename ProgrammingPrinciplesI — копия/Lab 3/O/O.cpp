#include <iostream>
using namespace std;
int main(){
    int n;

    cin>>n;

    int num[n];

    for(int i=0; i<n; i++){
        cin>>num[i];
    }



/* Bubble Sort */

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n-1; j++) {
      if (num[j] < num[j + 1]) {
        int cache = num[j]; 
        num[j] = num[j + 1]; 
        num[j + 1] = cache; 
      }
    }
  }


for (int i = 0; i < n; i++) {
    cout<<num[i]<< " ";
}
}