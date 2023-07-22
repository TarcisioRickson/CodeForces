#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int n;
    int number1, number2, number3;
    int contador;
 
    contador = 0;
 
    cin >> n;
 
    for(int i = 0; i < n; i++){
        cin >> number1 >> number2 >> number3;
 
        if(number1 == 1 && number2 == 1){
            contador += 1;
        } else if (number1 == 1 && number3 == 1){
            contador += 1;
        } else if (number2 == 1 && number3 == 1){
            contador += 1;
        } else {
 
        }
 
    }
    cout << contador << endl;
    return 0;
    }