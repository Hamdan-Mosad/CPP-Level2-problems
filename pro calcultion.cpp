#include <iostream>
using namespace std;
void manyprotact(int M[3]) {
    cout << "How many protict to bay from pro 1\n";
    cin >> M[0];
    cout << "-----------------------------------\n";
    cout << "How many protict to bay from pro 2\n";
    cin >> M[1];
    cout << "-----------------------------------\n";
    cout << "How many protict to bay from pro 3\n";
    cin >> M[2];
    cout << "-----------------------------------\n"; 
}
void matchprotact(float F[3]) {
    cout << "How match protict  1\n";
    cin >> F[0];
    cout << "----------------------------\n";
    cout << "How match protict  2\n";
    cin >> F[1];
    cout << "--------------------------------\n";
    cout << "How match protict  3\n";
    cin >> F[2];
    cout << "------------------------------------\n";
}
float culculation(float C[3]) {
    float sum;
    sum = C[0] + C[1] + C[2];
    return sum;
}
float totalculcut(float d[3]) {
    float sum;
    sum = (d[0] + d[1] + d[2])*.15;
    return sum;
}


int main()
{
    float prodact[3];
    int many[3];
    cout << "***************************\n";
    cout << "the many prodact is\n";
    manyprotact(many);
    cout << "***************************\n";
    cout << "the match prodact is\n";
    matchprotact(prodact);
    cout << "***************************\n";
    cout << "total price befor tax\n";
    culculation(prodact);
    cout << "***************************\n";
    cout << "total price after tax\n";
    totalculcut(prodact);
    cout << "***************************\n";
    cout << "total price is:";   totalculcut(prodact);
    return 0;
}
