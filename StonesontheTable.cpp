#include <iostream>
using namespace std;
#include <cmath>
 
int main() {
    int n;
    cin >> n;
 
    char x[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    int contador;
 
    for(int j = 0; j < n-1; j++){
        if(x[j] == x[j+1]){
            contador += 1;
        }
    }
    cout << contador;
    return 0;
}