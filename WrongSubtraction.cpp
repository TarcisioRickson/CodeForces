#include <iostream>
#include <cctype>
 
using namespace std;
 
int main() {
    int n;
    int k;
    cin >> n >> k;
 
    for(int i = 0; i < k; i++) {
        if (n % 10 != 0) {
            n -= 1;
        } else {
            n = n / 10;
        }
    }
    cout << n;
    return 0;
}