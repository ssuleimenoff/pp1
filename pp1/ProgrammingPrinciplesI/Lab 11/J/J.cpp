#include <bits/stdc++.h>
using namespace std;

bool cmp(double a, double b, double c, double d){

double e,f;

e = sqrt(a*a+b*b);
f = sqrt(c*c+d*d);

if(e<f) return e<f;
if(e>f) return e>f;
if(e=f) return true;

}


int main(){
    double x,y;
    cin >> x >> y;
    vector<pair<double, double> > v;

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> v[i].first;
        cin >> v[i].second;
    }

    sort(v.begin(),v.end(),cmp);
}