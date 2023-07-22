#include <iostream>
using namespace std;
 
int main(){
 
 
int num;
 
cin >> num;
 
string array[num];
 
int contador = 0;
 
for(int i = 0; i < num; i++){
    cin >> array[i];
}
 
for(int i = 0; i < num; i++){
    if(array[i] == "++X" || array[i] == "X++"){
        contador += 1;
    } else if (array[i] == "--X" || array[i] == "X--"){ 
        contador -= 1;
    }
}
 
 
cout << contador;
 
return 0;
}