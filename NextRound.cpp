#include <iostream>
using namespace std;
 
int main(){
 
    int numberofcases, colocation;
    cin >> numberofcases >> colocation;
 
    int array[numberofcases];
 
 
 
 
    for(int i = 0; i < numberofcases; i++){
        cin >> array[i];
    }
 
 
    int contador = 0;
 
    // para quinto lugar, é o array 4 ou seja >= ao array
    // se ele for maior ou igual a esse array ele entra em outro array e dps calculo o numero de elementos dentro desse outro array
    for(int i = 0; i < numberofcases; i++) {
        if (array[i] > 0) {
            if (array[colocation - 1] <= array[i] && array[i] > 0) {
                contador += 1;
            }
        }
    }
 
    cout << contador;
 
    return 0;
}