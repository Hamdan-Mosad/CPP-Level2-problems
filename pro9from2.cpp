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
int chackfreaq(short freaq, int num) {
    int diget = 0;
    int reminder = 0;
    while (num > 0) {
        reminder = num % 10;
        num = num / 10;
        if (freaq == reminder) {
            diget++;
        }
    }
    return diget;
}
void printdiget(int number) {
    for (int i = 0; i <= 9; i++) {
        short freaq = 0;
        freaq = chackfreaq(i,number);
        if (freaq > 0) {
            cout << "digt  =" << i << "times=   " << freaq<<endl;
        }
    }
    

}
int main()
{
    int number = readpositivenum("please enter to number\n");
    printdiget(number);
    return 0;
}