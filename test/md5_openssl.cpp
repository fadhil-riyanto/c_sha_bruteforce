#include <iostream>
#include <openssl/md5.h>
#include <string>
using namespace std;
unsigned char *MD5(const unsigned char *d, 
                   unsigned long n,
                   unsigned char *md);
#define M_ToCharPtr(p)        reinterpret_cast<char*>(p)                   // Cast to char*
#define M_ToWCharPtr(p)       reinterpret_cast<wchar_t*>(p)                // Cast to wchar_t*
#define M_ToConstCharPtr(p)   reinterpret_cast<const char*>(p)             // Cast to const char*
#define M_ToConstWCharPtr(p)  reinterpret_cast<const wchar_t*>(p)          // Cast to const wchar_t*
#define M_ToUCharPtr(p)       reinterpret_cast<unsigned char*>(p)          // Cast to unsigned char*
#define M_ToConstUCharPtr(p)  reinterpret_cast<const unsigned char*>(p)    // Cast to const unsigned char*
#define M_ToVoidPtr(p)        reinterpret_cast<void*>(p)                   // Cast to void*
#define M_ToConstVoidPtr(p)   reinterpret_cast<const void*>(p)             // Cast to const void*
#define M_ToIntPtr(n)         reinterpret_cast<int*>(n)                    // Cast to int*
#define M_ToConstIntPtr(p)    reinterpret_cast<const int*>(p)              // Cast to const int*
#define M_ToDoublePtr(n)      reinterpret_cast<double*>(n)                 // Cast to double*
#define M_ToConstDoublePtr(n) reinterpret_cast<const double*>(n)           // Cast to const double*
#define M_ToBoolPtr(n)        reinterpret_cast<bool*>(n)                   // Cast to bool*
#define M_ToConstBoolPtr(n)   reinterpret_cast<const bool*>(n)             // Cast to const bool*

// General Cast
#define M_To(T, p)            reinterpret_cast<T>(p)                       // Cast to T




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
        char buffer[256];
        // char* t = M_ToCharPtr(result[i]);
        sprintf(buffer, "%02x", result[i]);
        cout << buffer << endl;
    }
    //cout << sprintf(stringhehe, "%02x")  << endl;
        
}

// int main(){
//     // printf() parameter nya int printf(const char *__restrict__ __format, ...)
//     // sprintf() int sprintf(char *__restrict__ __s, const char *__restrict__ __format, ...)
// }

// //hmmm, bingung
