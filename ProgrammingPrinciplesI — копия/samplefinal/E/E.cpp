#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;

    int arr[n][m];

   map <int,int> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] > 0){
                m[i]++;
            }
        }
    }


    int max = m[0];

    for(int j=0; j<m; j++){
        if(m[j]>max){
            max = m[j];
        }
    }

    map <int, int> :: iterator it;

    for(it = m.begin(); m!=m.end(); it++){
        if((*it).second == max){
            cout<<(*it).first + 1;
            continue;
        }
    }



}