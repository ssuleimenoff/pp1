#include <bits/stdc++.h>
using namespace std;
int min(int s1, int s2){
    return s1 <= s2;
}
bool comp(vector<int> left, vector<int> right){
    if(accumulate(left.begin(), left.end(), 0) == accumulate(right.begin(), right.end(), 0)){
        if(left.size() == right.size()){
            for(int i = 0; i < min(left.size(), right.size()); i++){
                return left[i] < right[i];
            }
        }
        return left.size() < right.size();
    }
    return accumulate(left.begin(), left.end(), 0) < accumulate(right.begin(), right.end(), 0);
}
int main(){
    int size;
cin >> size;
    vector<vector<int> > inputData;

    for(int i = 0; i < size; i++){
        int rowSize;
        cin >> rowSize;
        vector<int> row(rowSize);
        for(int j = 0; j < rowSize; j++){
            int el;
            cin >> el;
            row[j] = el; 
        }
        inputData.push_back(row);
    }

    sort(inputData.begin(), inputData.end(), comp);

    for(int i = 0; i < size; i++){
        vector<int> row = inputData[i];
        for(int j = 0; j < row.size(); j++){
            cout << row[j] << " ";
        }
        cout << endl;
    }

    return 0;
}