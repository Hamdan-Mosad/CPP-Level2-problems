
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
int reversnum(int number) {
    int remiender = 0, number2 = 0;
    while (number > 0) {
        remiender = number % 10;
        number = number / 10;
        number2 = (number2 * 10) + remiender;
    }
    return number2;
}
void print(int number) {
    int remiender = 0;
    while (number > 0) {
        remiender = number % 10;
        number = number / 10;
        cout << remiender << endl;
    }
}

int main()
{
    print(reversnum(readpositivenum("please enter to number\n")));
    return 0;
}