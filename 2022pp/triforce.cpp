#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << "*" << endl;
        cout << "* *" << endl;
    }
    else {
        int total = n * 4 - 1;
        int top = (total + 1)/2 - 1;
        char matrix[2*n][total];
        int count = 0; 
        for(int i=0;i<2*n;i++){
            for(int j=0;j<total;j++){
                matrix[i][j] = ' ';
            }
        }   
        cout << top << endl;
        for(int i=0;i<2*n;i++){
            for(int j=0;j<=total;j++){
                if(j == top && i == 0){
                    matrix[i][j] = '*';
                }
                else if(i == (2*n) - 1){
                    if((j>=0 && j<n*2-1) || (j >= 2*n && j<=n*4-1)){
                        matrix[i][j] = '*';
                    }
                }
                else if(i<n || i == n){
                    if(j == top-i || j == top+i){
                        matrix[i][j] = '*';
                    }
                    else if(i > n){
                        int c1 = top - i;
                        int c2 = top + i;
                    }
                }
            }
        } 
}
}