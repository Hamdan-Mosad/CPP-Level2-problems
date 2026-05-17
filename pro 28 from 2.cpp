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
void copyarray(int arr1[100], int arr2[100], int arraylength) {
    for (int i = 0;i < arraylength;i++) {
        arr2[i] = arr1[i];
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlength;
    fillarraywithrandomnumber(arr, arrlength);
    int arr2[100];
    copyarray(arr,arr2, arrlength);
    cout << "\narray 1 element :\n";
     Printarray(arr, arrlength) ;
    cout << "\n array 2 element:\n";
    Printarray(arr2, arrlength);
    return 0;
}