#include <bits/stdc++.h>
using namespace std;

int i = 0;
int n;

int power (){
    int res = 1;
    if(i == 0){
        i++;

    return 1;
}
    for( ;i<n;i++){
        res *= n;
        i++;

        return res;
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> v(n);

    generate(v.begin() , v.end() , power);

    vector <int>::iterator it;
    for(it = v.begin();it != v.end();it++)
    cout << *it << ' ';

    return  0;

}