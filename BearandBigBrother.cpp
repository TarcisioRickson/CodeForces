#include <iostream>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
    int contador;
    while (a <= b){
        a = a * 3;
        b = b * 2;
        contador += 1;
        if(a > b){
            cout << contador;
        }
    }
    return 0;
}