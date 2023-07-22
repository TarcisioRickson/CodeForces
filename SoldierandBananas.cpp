#include <iostream>
using namespace std;
 
int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int value;
 
    for (int i = 1; i < w + 1; i++) {
        value += i * k;
    }
    if(n > value){
        cout << 0;
    } else {
        cout << value - n;
    }
    return 0;
}