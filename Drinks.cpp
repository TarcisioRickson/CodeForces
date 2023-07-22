#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    double calc = 0;
 
    int p[n];
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    for(int i = 0; i < n; i++){
        calc += p[i];
    }
    double calc2 = (calc / n) ;
    cout << fixed << setprecision(15) << calc2;
    return 0;
}