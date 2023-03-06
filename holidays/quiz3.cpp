#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int power(int n, int arr, int N){

   for(int i = 0; i<n; i++){
    cin>>arr[i];
   }

    if(N<n){
    cout<<pow(arr[N], N);
   }
   
   else{
    cout<<"-1";
   }
}


int main(){
   int n;
   cin>>n;
   int arr[n];
   int N;
   cin>>N;
  power(n,arr,N);
}