#include <iostream>
#include <string>

#define LETTERS 26
#define LASTCHARACTER 122

using namespace std;

int main() {

        string phrase = "";
        cout << "Enter phrase to encrypt or decrypt: ";
        getline(cin, phrase);
        size_t length = phrase.size();
        cout << "Encrypted/Decrypted Phrase: ";
        for (int i = 0; i < length; i++) {
               char c = phrase[i] + 13;
               if(isupper(c)) {
                        if(c > LASTCHARACTER) { c = c - LETTERS; }
               }
               else if(islower(c)) {
                        if(c >= LASTCHARACTER) { c = c - LETTERS; }
               }
               cout << c;
        }
        cout << endl;
}

