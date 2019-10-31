#include <iostream>
using namespace std;

int main()
{
    cout<< "================================== " << endl;
    cout<< "         By DIMAS RIZQI FIRDAUS    " << endl;
    cout<< "            A2.1900051             " << endl;
    cout<< "===================================" << endl;
    cout<< endl;
    int X;

    cout << "Masukan nilai X : ";
    cin >> X;
    cout << "\n";

    X = (X < 0) ? -X : X;
    cout << "| X | = " << X;
    cout << "\n \n";

    return 0;
}
