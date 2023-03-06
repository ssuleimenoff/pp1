#include <iostream>

using namespace std;

int main()
{
    int n;
    int t = 0;
    cin >> n;

    int* numbers = new int[n];

    for(int i = 0; i < n; i++) 
    {
        
cin >> numbers[i];

    }

for(int i = 0; i < n; i++){

int o = numbers[i];

while(o>9){

if (o%10==0){
t = t+1;
o=o/10;
}else{
    o=o/10;
}

}

}
cout << t << endl;
    return 0;
}