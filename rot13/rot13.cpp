#include <iostream>
#include <string>

using namespace std;

int main() {

        string phrase = "";
        cout << "Enter phrase to encrypt or decrypt: ";
        getline(cin, phrase);
        int length;
        for(length = 0;; length++) if(!phrase[length]) break;
        int rot[length];
        
        cout << "Encrypted/Decrypted Phrase: ";

        for (int i = 0; i < length; i++) {
               rot[i] = (int) phrase[i] + 13;
               if(rot[i] > 122) { rot[i] = rot[i] - 26; }
               cout << (char) rot[i];
        }
 
        cout << endl << endl << endl;
        
        for (int i = 0; i < length; i++) {
               cout << phrase[i];
               cout << "  ";
               cout << (int) phrase[i] << endl;
        }


}
