#include <bits/stdc++.h>
using namespace std;
int main(){

   int n;
   cin >> n;
   string t = "[*]";

   int num [n];

   for(int i = 0; i < n; i++){
       num[i] = i+1;
   }

   for(int i = 0; i < n; i++){
       for(int j = 0; j < num[i]; j++){

cout << t;

       }
       cout <<endl;
   } 

}