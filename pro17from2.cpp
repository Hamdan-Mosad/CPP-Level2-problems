#include <iostream>
#include <string>
using namespace std;
string readpassword() {
    string password;
    cout << "please enter to latterpassword\n";
    cin >> password;
    return password;
}
bool gusspassword(string orginal) {
    string word = "";
    int counter = 0;
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int k = 65; k <= 90; k++) {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                counter++;
                cout << "trial[" << counter << "]:" << word << endl;
                    if (word == orginal) {
                        cout << "\npassword is " << word << "\n";
                        cout << "found after " << counter << "trial\n";
                        return true;
                    }
                    word = "";
            }
        }
    }
    return false;
}
int main()
{
    gusspassword(readpassword());
    return 0;
}
