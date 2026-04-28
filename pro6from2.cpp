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
int revasrandprint(int n) {
    int reminder = 0,sum=0;
    while (n > 0) {
        reminder = n % 10;
        n = n / 10;
        sum = sum + reminder;
    }
    return sum;
}
int main()
{
    cout<<"\nthe sum digint=\n "
    <<revasrandprint(readposiativenumber("please enter to number\n"));
    return 0;
}