#include "function_hash.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;
using namespace util_fungsi_hash;


std::string charset_bruteforce = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ~`!@#$%^&*()-_\\/\\\'\";:,.+=<>? ";
int max_length = 8;
int str_length = charset_bruteforce.size();
std::string targetnya;

string lowercase_string(char charuntuklower[]){
    char ch;
    string stringku = "";
    for (int i = 0; i < strlen(charuntuklower); i++) {
        ch = tolower(charuntuklower[i]);
        stringku += ch;
    }
    return stringku;
}

class bruteforce{
public:
	void cek_password(std::string password, std::string typehash);
	void recurse(int width, int position, std::string base_string, std::string typehash);
};

void bruteforce::cek_password(std::string password, std::string typehash){
    if(typehash == "sha256"){
        std::string hash_mentah = sha256(password);
        std::string hash_hasil = hash_mentah;
        std::cout << hash_hasil + " | " + password << std::endl;

        if(targetnya == hash_hasil){
            std::cout << "hasilnya adalah : " + password;
            exit(0);
        }
    }else if(typehash == "sha512"){
        std::string hash_mentah = sha512(password);
        std::string hash_hasil = hash_mentah;
        std::cout << hash_hasil + " | " + password << std::endl;

        if(targetnya == hash_hasil){
            std::cout << "hasilnya adalah : " + password;
            exit(0);
        }
    }else{
        cout << "hash function tidak ditermukan" << endl;
        exit(1);
    }
	
}

void bruteforce::recurse(int width, int position, std::string base_string, std::string typehash){
	for (int i = 0; i < str_length; ++i) {
        if (position  < width - 1) {
                bruteforce::recurse(width, position + 1, base_string + charset_bruteforce[i], typehash);
        }
        bruteforce::cek_password(base_string + charset_bruteforce[i], typehash);
    }
}


int main(int argc, char** argv){
    // cout << sha512("hae") << endl;
    if(argc == 1){
        cout << "gunakan parameter ./bruteforce <hash> <hashed_string>" << endl;
    }else if(argc == 2){
        cout << "gunakan parameter ./bruteforce <hash> <hashed_string>" << endl;
    }else if(argc == 3){
        // cout << argv[2] << endl;
        targetnya = argv[2];
        string metode = lowercase_string(argv[1]);
        bruteforce bf;
        for (int i = 1; i < str_length + 1; ++i) {
            bf.recurse(i, 0, "", metode);
        }

    }else{
        cout << "parameter tidak dikenali :D" << endl;
    }
}



/* PHP TEST
php -a 
echo hash("sha512", "hae");
*/