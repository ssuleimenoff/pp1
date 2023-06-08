
#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    int n,m,s;
 
    cin >> n;
    int mas1[n];


    for (int i=0; i<n; i++)
    {
        cin >> mas1[i];
    }


    
    cin >> m;
    int mas2[m];


    for (int i=0; i<m; i++)
    {
        cin >> mas2[i];
    }


    s = n + m;
 
    int mas3[s];


    for (int i=0; i<n; i++)
    {
        mas3[i] = mas1[i];
    }



    for (int i=n; i<s; i++)
    {
        mas3[i] = mas2[i - n];
    }
 
//Sort
 

sort(mas3, mas3+s);


//Output
    for (int i=0; i<s; i++)
    {
        cout << mas3[i] << " ";
    }
 
    return 0;
}