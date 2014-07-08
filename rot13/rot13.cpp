#include <iostream>
#include <string>

using namespace std;

int main() {

        string phrase = "";
        getline(cin, phrase);
        int length;
        for(length = 0;; length++) if(!phrase[length]) break;
        int rot[length];

        for (int i = 0; i < length; i++) {
               rot[i] = (int) phrase[i] + 13;
                if(rot13[i] > 122) rot13[i] - 25; 
               cout << (char) rot[i];
        }
        cout << endl;
        for (int i = 0; i < length; i++) {
               cout << phrase[i];
               cout << "  ";
               cout << (int) phrase[i] << endl;
        }


}
