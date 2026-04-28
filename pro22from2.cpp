#include <iostream>
#include <string>
using namespace std;
int readpositivenumber(string massage) {
    int number = 0;
    do {
        cout << "please enter to number\n";
        cin >> number;
    } while (number <= 0);
    return number;
}
void readarray(int arr[100], int& arrlength) {
    cout << "\nenter number of element:\n";
    cin >> arrlength;
    cout << "\nenter arrelemant :\n";
    for (int i = 0; i < arrlength; i++) {
        cout << "element[" << i + 1 << "] :";
        cin >> arr[i];
    }
    cout << endl;
}
void printarr(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++) {
        cout << arr[i] << "";
    }
    "\n";
}
int timerebeat(int number, int arr[100], int arrlength) {
    int counter = 0;
    for (int i = 0; i <= arrlength; i++) {
        if (number == arr[i]) {
            counter++;
        }
        
    }
    return counter;
}
int main()
{
    int arr[100];
    int arrlength;
    int numbertochcalk;
    readarray(arr, arrlength);
    numbertochcalk = readpositivenumber("enter to number to chack:");
    cout << "\norgenail arr:";
    printarr(arr, arrlength);
    cout << "\n number " << numbertochcalk;
    cout << "\nisreabt ";
    cout << timerebeat(numbertochcalk, arr, arrlength);
    return 0;
}