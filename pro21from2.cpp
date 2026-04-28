#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int randomnumber(int from, int to) {
    int randomnumber = rand() % (to - from + 1) + from;
    return randomnumber;
}
enum enchartype { smallater = 1, captaillater = 2, spicail = 3, digit = 4 };
char getrandomchar(enchartype chtyp) {
    switch (chtyp) {
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
int readpositivenumber(string massage) {
    int number = 0;
    do {
        cout << "please enter to number\n";
        cin >> number;
    } while (number <= 0);
    return number;
}
string genartword(enchartype shtype, short lenght) {
    string word;
    for (int i = 1; i <= lenght; i++) {
        word = word + getrandomchar(shtype);
    }
    return word;
}
string genaretkey() {
    string key = "";
    key = genartword(enchartype::captaillater, 4) + "-";
    key =key+ genartword(enchartype::captaillater, 4) + "-";
    key = key+genartword(enchartype::captaillater, 4) + "-";
    key = key+genartword(enchartype::captaillater, 4) ;
    return key;

}
void genaretkyes(short numberofkey) {
    for (int i = 1; i <= numberofkey; i++) {
        cout << "key[" << i << "]:";
        cout << genaretkey() << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    genaretkyes(readpositivenumber("please enter to number"));
    return 0;
}
