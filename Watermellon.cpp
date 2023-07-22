#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
 
    int num;
    cin >> num;
 
    if(num % 2 == 0 && num != 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
        return 0;
    }