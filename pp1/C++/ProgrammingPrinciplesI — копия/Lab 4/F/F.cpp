#include <bits/stdc++.h>
using namespace std;
int main(){

 int n;
 cin >> n;

 int k, l = 0;

 int num[n][n];
 long max = -1000000000;

 for(int i=0; i<n; i++){
     for(int j=0; j<n; j++){

         cin >> num[i][j];

     }
 }

 for(int i=0; i<n; i++){
     for(int j=0; j<n; j++){
         
         if(num[i][j] > max){
             max = num[i][j];
             k = i+1;
             l = j+1;
         }

     }
 }

cout << k <<" "<< l;

}