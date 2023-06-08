#include <iostream>
#include <numeric>
#include <vector>

using namespace std;


int total(int money[], int amount[]){
    int sum = 0;
    for(int i = 0; i < 7; i++){
        sum+= money[i]*amount[i];
    }
    return sum;
}



int main(){

    int money[] = {1,2,5,10,20,50,100};
    int amount[7];

    for(int i = 0; i < 7; i++){
        cin >> amount[i];
    }

    int size;
    cin >> size;

    int customers[size];
    for(int i = 0; i < size; i++){
        cin >> customers[i];
    }


    for(int i = 0; i < size; i++){
        int transaction = customers[i];

        while(transaction > 0){
            if(total(money, amount) < transaction){
                break;
            }

            //find best available surrender
            int maxId = 6;
            while((transaction < money[maxId] || amount[maxId] == 0) && maxId>= 0){
                maxId--;
            }

            if(amount[maxId] != 0){
                transaction-=money[maxId];
                cout << "We are giving " << money[maxId] << endl;
                amount[maxId]--;
            }

        }

        if(transaction == 0){
            cout << "Accepted" << endl;
        }else{
            cout << "Denied" << endl;
        }
    }

}