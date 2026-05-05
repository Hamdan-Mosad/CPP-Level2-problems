#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int ReadRandomNumber(int from, int to) {
    int randomnumber = rand() % (to - from + 1) + from;
    return randomnumber;
}
void fillarraywithrandomnumber(int arr[100], int& arrlength) {
    cout << "\nplease enter of element\n";
    cin >> arrlength;
    for (int i = 0;i < arrlength;i++) {
        arr[i] = ReadRandomNumber(1, 100);
    }
}
void Printarray(int arr[100], int arrlength) {
    for (int i = 0;i < arrlength;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int maxnumberinarray(int arr[100], int arrlength) {
    int max = 0;
    for (int i = 0;i < arrlength;i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlength;
    fillarraywithrandomnumber(arr, arrlength);
    cout << "\narray element :\n";
    Printarray(arr, arrlength);
    cout << "\nmax number is:";
    cout << maxnumberinarray(arr, arrlength);
    return 0;
}
