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
               char c = phrase[i];
               if(isupper(c)) {
                        if(c + 13  > LASTCHARACTER - 33) { c = c + 13 - LETTERS; }
//                        cout << " upper ";
}
               else if(islower(c)) {
                        if(c + 13 >= LASTCHARACTER) { c = c + 13 - LETTERS; }
//                        cout << " lower ";
}
               cout << c;
        }
        cout << endl;
}

