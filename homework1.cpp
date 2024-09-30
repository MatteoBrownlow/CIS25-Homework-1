#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int number, greaterThan = 0;
    cout << "Enter a positive integer: " << endl;
    cin >> number;
    while(pow(2, greaterThan) < number){
        greaterThan++;
    }
    cout << "The number in binary: " << endl;
    for(int i = 0; i <= greaterThan; greaterThan--){
        if(number >= pow(2, greaterThan)){
            number -= pow(2, greaterThan);
            cout << "1";
        }
        else{
            cout << "0";
        }
    }

    return 0;
}