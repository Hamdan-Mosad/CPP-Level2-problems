#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int randomnumber(int from, int to) {
    int randomnumber = rand() % (to - from + 1) + from;
    return randomnumber;
}
int main()
{
    srand((unsigned)time(NULL));
    cout << randomnumber(1, 100) << endl;
    cout << randomnumber(1, 100) << endl;
    cout << randomnumber(1, 100) << endl;
    cout << randomnumber(1, 100) << endl;
    return 0;
}
