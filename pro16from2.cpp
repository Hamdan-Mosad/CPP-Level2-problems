
#include <iostream>
#include <string>
using namespace std;
void printaaatozzz() {
    cout << "\n";
    string word = "";
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int r = 65; r <= 90; r++) {
                word = word + char(i);
                word = word + char(j);
                word = word + char(r);
                cout << word << endl;
                word = "";
            }
        }
        cout << "\n-------------------------------\n";
    }
}
int main()
{
    printaaatozzz();
    return 0;
}

