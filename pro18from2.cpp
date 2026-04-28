#include <iostream>
#include <string>
using namespace std;
string readtaxst() {
    string taxst;
    cout << "please enter to taxst\n";
   getline( cin , taxst);
    return taxst;
}
string encryptype(string taxst, short enc) {
    for (int i = 0; i < taxst.length(); i++) {
        taxst[i] = char((int)taxst[i] + enc);
    }
    return taxst;
}
string dcrypttaxst(string taxst, short enc) {
    for (int i = 0; i <taxst.length(); i++) {
        taxst[i] = char((int)taxst[i] -enc);
    }
    return taxst;
}
int main()
{
    const short en = 2;
    string taxst1, texst2;
    string org = readtaxst();
    taxst1 = encryptype(org, en);
    texst2 = dcrypttaxst(taxst1, en);
    cout << "\nthe orgenail taxst is:" << org<<endl;
    cout << "the taxst after :" << taxst1<<endl;
    cout << "the taxst befor :" << texst2 << endl;
    return 0;
}

