#include <iostream>
#include <string>
using namespace std;


string convertToString(unsigned char a)
{
    // int i;
    // string s = "";
    // for (i = 0; i < size; i++) {
    //     s = s + a[i];
    // }
    string stringbaru = "";
    stringbaru += a;
    return stringbaru;
}

using namespace std;

int main()
{
    unsigned char result[MD5_DIGEST_LENGTH];
    const unsigned char* str;
    str = (unsigned char*)"hello";
    unsigned int long_size = 100;
    MD5(str,long_size,result);
    string stringhehe = "";
    for (int i=0; i < MD5_DIGEST_LENGTH; i++)
    {   
        //string strku = convertToString(result[i]);
        //sprintf(strku, "%02x");
        sprintf(nullptr, result[i], "%02x");
    }
    //cout << sprintf(stringhehe, "%02x")  << endl;
        
}

// int main(){
//     // printf() parameter nya int printf(const char *__restrict__ __format, ...)
//     // sprintf() int sprintf(char *__restrict__ __s, const char *__restrict__ __format, ...)
// }

// //hmmm, bingung
