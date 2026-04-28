#include <iostream>
#include <string>
using namespace std;
int Readpositavnumber(string massag) {
    int number = 0;
    do {
        cout << massag;
        cin >> number;
    } while (number <= 0);
    return number;
}
bool chackparfactnum(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0) {
            sum += i;
        }

    }
    return number == sum;
}
void printprifactornot(int number) {
    if (chackparfactnum(number)) {
        cout << "the number is aprifact";
    }
    else
        cout << "the number is anot parifact";
}
int main()
{
    printprifactornot(Readpositavnumber("please enter to number \n"));
    return 0;
}

