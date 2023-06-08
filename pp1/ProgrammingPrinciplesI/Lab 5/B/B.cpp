#include <bits/stdc++.h>
using namespace std;
int main(){

string text;

cin >> text;

for (int i = 0; i < text.size(); i++)
    {
        if (text[i]>90)
        {
            text[i] = text[i] - 32;
        }
    }

cout << text;   
}

