#include <iostream>
#include <string>
using namespace std;

int main(){
   int n;
   cin>>n;
   int array[n];
   for(int i = 0; i<n; i++){
    cin>>array[i];
   }

   int N;
   cin>>N;
   if(N<n){
    for(int i =0; i<N; i++){
        array[N]= array[N]* array[N];
    }
    cout<<array[N];
   }
   
   else{
    cout<<"-1";
   }
}