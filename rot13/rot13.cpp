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
               int c = phrase[i];
               if(isupper(c)) { 
                       c+=13;
                       if(c > LASTCHARACTER - 33) { c = c - LETTERS; }
//                        cout << " upper ";
}
               else if(islower(c)) {
                       c+=13;
                        if(c > LASTCHARACTER) { c = c - LETTERS; }
//                        cout << " lower ";
}
               cout << (char) c;
        }
        cout << endl;
}

