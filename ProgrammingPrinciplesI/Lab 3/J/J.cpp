#include <iostream>

using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    int num[n];
    int a = -1;

    for (int i=0; i<n; i++){
        cin>>num[i];



        if(num[i]<=t){
            a = i+1;


        }



    }

    cout<<a;
}