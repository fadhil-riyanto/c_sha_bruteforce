#include <cctype>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;



string lowercase_string(char charuntuklower[]){
    char ch;
    string stringku = "";
    for (int i = 0; i < strlen(charuntuklower); i++) {
        ch = tolower(charuntuklower[i]);
        stringku += ch;
    }
    return stringku;
}
int main(){
    char str[] = "HALO pak hehe";
    cout << lowercase_string(str) << endl;
}