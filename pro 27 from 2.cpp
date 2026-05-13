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
int sumnumberinarray(int arr[100], int arrlength) {
    int sum = 0;
    for (int i = 0;i < arrlength;i++) {

        sum += arr[i];

    }
    return sum;
}
float AverageArray(int arr[100], int arrlength) {
    return (float)sumnumberinarray(arr, arrlength) / arrlength;
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlength;
    fillarraywithrandomnumber(arr, arrlength);
    cout << "\narray element :\n";
    Printarray(arr, arrlength);
    cout << "\nsum number in array:";
    cout << sumnumberinarray(arr, arrlength)<<endl;
    cout << "\nAverage array :";
  cout<<  AverageArray(arr, arrlength);
    return 0;
}