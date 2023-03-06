#include <bits/stdc++.h>
using namespace std;

int main(){
double d;
int n;
cin >> n;

string a;
int b;

map<string, double> m;
vector<pair<double, string> > v;


for(int i = 0; i < n; i++){
    cin >> a;
    cin >> b;

    m[a]=m[a]+b;
}

map<string, double>::iterator it;


int sum = 0.000;

    for(it = m.begin(); it != m.end(); it++){
        sum += (*it).second;
    }





    for(it = m.begin(); it != m.end(); it++){

        v.push_back(make_pair( (double) (*it).second*100/sum, (*it).first));

    }

    sort(v.rbegin(), v.rend());

    for(int i = 0; i < v.size(); i++){
        cout<<v[i].second<<" "<<v[i].first<<"%"<<endl;
    }
}