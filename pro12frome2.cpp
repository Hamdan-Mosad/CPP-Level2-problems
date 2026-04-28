
#include <iostream>
#include <string>
using namespace std;
int readpositivenum(string massage) {
    int number = 0;
    do {
        cout << massage;
        cin >> number;
    } while (number <= 0);
    return number;
}
void printnum(int num) {
    for (int i = num; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
    
}
int main()
{
    printnum(readpositivenum("please enter to number\n"));
    return 0;
}

