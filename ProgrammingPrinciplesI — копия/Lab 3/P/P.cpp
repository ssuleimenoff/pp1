#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n;
    cin >> n;

    double r;
    r = sqrt(n);
    
    //n = 2;
    //r = sqrt (2);
    //r = 1.4142135


    //int c = r = 1;
    int c = r;

    
    double d = r-c;
    // d = 1.4142135 - 1 = 0.4142135



    if(d>0){

        cout << "No";

    }else{

        cout << "Yes";

    }
}