#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
enum enprimornotprime { prime = 1,notprime=2 };
enprimornotprime chacknumber(int number) {
    int m = round(number / 2);
    for (int counter = 2;counter <= m;counter++) {
        if (number % counter == 0)
            return enprimornotprime::notprime;
    }
    return enprimornotprime::prime;
     }
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
void copyonlyprimenumber(int arr[100], int arr2[100], int arrlength, int& arrlength2) {
    int counter = 0;
    for (int i = 0;i < arrlength;i++) {
        if (chacknumber(arr[i]) == enprimornotprime::prime) {
            arr2[counter] = arr[i];
            counter++;
        }
    }
    arrlength2 = --counter;
}
void Printarray(int arr[100], int arrlength) {
    for (int i = 0;i < arrlength;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlength;
    fillarraywithrandomnumber(arr, arrlength);
    int arr2[100], arrlength2=0;
    copyonlyprimenumber(arr, arr2, arrlength, arrlength2);
    cout << "\nthe element of array\n";
    Printarray(arr, arrlength);
    cout << "\n the prime element \n";
    Printarray(arr2, arrlength2);
    return 0;
}
