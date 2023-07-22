#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int cases;
    cin >> cases;
    int resp[cases];
 
    int pregos;
 
    for(int j = 0; j < cases; j++) {
        int contador = 0;
        cin >> pregos;
        int a[pregos];
        int b[pregos];
        for (int i = 0; i < pregos; i++) {
            cin >> a[i] >> b[i];
            if (a[i] > b[i]) {
                contador += 1;
            }
        }
        resp[j] = contador;
    }
    for(int i = 0; i < cases; i++) {
        cout << resp[i] << endl;
    }
 
 
 
    return 0;
}