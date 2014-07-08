#include <iostream>
#include <string>

using namespace std;

int main() {

        string phrase = "";
        getline(cin, phrase);
        int length;
        for(length = 0;; length++) if(!phrase[length]) break;

        for (int i = 0; i < length; i++) {
               cout << phrase[i];
               cout << "  ";
               cout << (int) phrase[i] << endl;
        }


}
