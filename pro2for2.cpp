#include <iostream>
#include <string>
using namespace std;
enum enprimeornot { prime = 1,Notprime=2 };
int Readpositavnumber(string massag) {
    int number = 0;
        do {
            cout << massag;
            cin >> number;
        } while (number <= 0);
        return number;
}
enprimeornot chack(int number) {
    int m = round(number / 2);
    for (int counter = 2; counter <= m; counter++) {
        if (number % counter == 0)
            return enprimeornot::Notprime;
    }
    return enprimeornot::prime;
}
void printnum(int number){
    cout << "\n";
    cout << "prime number from " << 1 << "to" << number;
    cout << "are:" << endl;
    for (int i = 1; i <= number; i++) {
        if (chack(i) == enprimeornot::prime) {
            cout << i << endl;
        }
    }
}

int main()
{
    printnum(Readpositavnumber("please enter to poasitev number?\n"));
    return 0;
}