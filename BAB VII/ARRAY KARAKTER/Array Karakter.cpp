#include <iostream>
using namespace std;

int main()
{
    cout<< "================================== " << endl;
    cout<< "         By DIMAS RIZQI FIRDAUS    " << endl;
    cout<< "            A2.1900051             " << endl;
    cout<< "===================================" << endl;
    cout<< endl;
    char NAMAKU [6] = {'H', 'A', 'S', 'Y', 'A', '\0'};
    char NAMAMU [6] = "Tasya";

    for (int C=0; C<6; C++)
    {
        cout << NAMAKU [C];
    }
    cout << endl;

    cout << NAMAMU;

    cout << endl << endl;

    cout << "Jumlah Elemen NAMAKU : " << sizeof (NAMAKU) << endl;

    cout << "Jumlah Elemen NAMAMU : " << sizeof (NAMAMU) << endl << endl;

    return 0;

}