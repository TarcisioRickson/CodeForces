#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
 
int main() {
 
    string word;
    cin >> word;
    int size = word.size();
 
    std::sort(word.begin(), word.end());
 
    int contador = 0;
 
    for(int i = 0; i < size; i++){
        if(word[i] != word[i+1]){
            contador += 1;
        }
    }
 
 
    if(contador % 2 == 0){
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
        return 0;
 
    }