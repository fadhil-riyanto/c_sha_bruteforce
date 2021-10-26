#include "function_hash.hpp"
#include <iostream>
using namespace std;
using namespace util_fungsi_hash;

int main(){
    cout << sha512("hae") << endl;
}

/* PHP TEST
php -a 
echo hash("sha512", "hae");
*/