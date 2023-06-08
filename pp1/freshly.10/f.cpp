#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
double ctg(int first , int second , int finals){
    int attestations = first + second;
    if(attestations < 30){
        return 0;
    }
    if(finals < 20){
        return 0;
    }
    int grades = attestations + finals;
    double step = 1.0/3.0;

    if(grades >= 50){
        double count = ceil((100.0 - grades) / 5.0);
        return 4.0 - (step)*(count - 1);    
        }
        else {
            return 0.00;
        }
}
int main(){
    int n;
    cin >> n;
    int overCredit = 0;
    double gpa = 0;


    for(int i=0;i<n;i++){
        int first , second , finals , credits;
        cin >> first >> second >> finals >> credits;
        gpa += ctg(first , second , finals)*credits;
        overCredit += credits;
    }
    double finalgpa = gpa / overCredit;
    cout << finalgpa << endl;
    return 0;
}