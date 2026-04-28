#include <iostream>
#include <string>
using namespace std;
int readposiativenumber(string massage) {
    int number = 0;
    do {
        cout << massage;
        cin >> number;
    } while (number <= 0);
    return number;
}
int revasrandprint(int n,short diget) {
    int reminder = 0, free= 0;
    while (n > 0) {
        reminder = n % 10;
        n = n / 10;
        if (diget == reminder) {
            free++;
        }
    }
    return free;
}
int main()
{
    int number = readposiativenumber("please enter to number \n");
    short diget = readposiativenumber("please enter to daget\n");


    cout << "\nthe sum digint=\n "
        << revasrandprint(number,diget);
    return 0;
}