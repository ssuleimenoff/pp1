#include <bits/stdc++.h>
using namespace std;
struct newgpa{
    string lastname;
    string firstname;
    double gpa;
};
bool customComparator(newgpa a, newgpa b){
    if(a.gpa == b.gpa){
        if(a.lastname == b.lastname){
            return a.firstname < b.firstname;
        }
        return a.lastname < b.lastname;
    }
    return a.gpa < b.gpa;
}
int main(){
    int n , numS, currCredit ,totalCredit = 0;
    double sumgpa = 0.00;
    string currMark;
    map <string, double> gpatable;
    gpatable["A+"] = 4.00;
    gpatable["A"] = 3.75;
    gpatable["B+"] = 3.50;
    gpatable["B"] = 3.00;
    gpatable["C+"] = 2.50;
    gpatable["C"] = 2.00;
    gpatable["D+"] = 1.50;
    gpatable["D"] = 1.00;
    gpatable["F"] = 0.00;
    cin >> n;
    vector <newgpa> v;
    for(int i=0;i<n;i++){
        newgpa sg;
        cin >> sg.lastname >> sg.firstname >> numS;
        for(int j=0;j<numS;j++){
            cin >> currMark >> currCredit;
            totalCredit += currCredit;
            sumgpa += currCredit * gpatable[currMark];
        }
        sg.gpa = sumgpa/totalCredit;
        v.push_back(sg);
        totalCredit = 0;
        sumgpa = 0;
    }
    sort(v.begin() , v.end(), customComparator);
    vector <newgpa>::iterator it;
    for(it = v.begin(); it != v.end() ; it++){
        newgpa sg = *it;
        cout << sg.lastname << " " << sg.firstname << " " << fixed << setprecision(3) << sg.gpa << endl;
    }
    return 0;
}