#include <iostream>
#include <string>

using namespace std;

int main() {

        string phrase = "";
        getline(cin, phrase);
        int n = strlen(phrase);
        for (int i = 0; i < n-1; i++) {
               cout << phrase[i];
               cout << "  ";
               cout << (int) phrase[i] << endl;
        }


}
