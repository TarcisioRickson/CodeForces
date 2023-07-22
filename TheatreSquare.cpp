#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    double num1;
    double num2;
    double num3;
 
    cin >> num1;
    cin >> num2;
    cin >> num3;
 
    long long int answer = ceil(num1 / num3) * ceil(num2 / num3);
    cout << answer;
 
    return 0;
}