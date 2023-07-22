#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
 
    int num;
    string st1;
 
        cin >> num;
    for(int i = 0; i < num; i++){
 
        cin >> st1;
 
        if(st1.length() > 10){
            cout << st1[0] << st1.length() - 2 << st1[st1.length() - 1] << endl;
        } else {
            cout << st1 << endl;
        }
    }
 
 
    return 0;
}