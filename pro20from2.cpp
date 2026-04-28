#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int randomnumber(int from, int to) {
    int randomnumber = rand() % (to - from + 1) + from;
    return randomnumber;
}
enum enchartype { smallater = 1,captaillater=2,spicail=3,digit=4 };
char getrandomchar(enchartype chtyp) {
    switch(chtyp) {
    case enchartype::smallater: {
        return char(randomnumber(97, 122));
        break;
    }
    case enchartype::captaillater: {
        return char(randomnumber(65, 90));
        break;
    }
    case enchartype::spicail: {
        return char(randomnumber(33, 47));
        break;
    }
    case enchartype::digit: {
        return char(randomnumber(48, 57));
        break;
    }
    }
    return '\0';
}
int main()
{
    srand((unsigned)time(NULL));
    cout<<getrandomchar(enchartype::smallater)<<endl;
    cout << getrandomchar(enchartype::captaillater) << endl;
    cout << getrandomchar(enchartype::spicail) << endl;
    cout << getrandomchar(enchartype::digit) << endl;
    return 0;
}
