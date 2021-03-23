#include <iostream>
#include "Vector3D.h"

int main()
{
    Vector3D A, B, C;

    cout << "\nVector A" << endl;
    cin >> A;
    cout << A;

    cout << "\nVector B" << endl;
    cin >> B;
    cout << B;

    cout << "\nVector C" << endl;
    cin >> C;
    cout << C;

    cout << "\nA + B = " << endl;
    cout << A + B << endl;

    cout << "\nB + C = " << endl;
    cout << B + C << endl;

    cout << "\nA + C = " << endl;
    cout << A + C << endl;

    cout << "\nA * B = " << A * B << endl;

    cout << "\nA > B" << endl;
    if (A > B) cout << "Yes" << endl; else cout << "No" << endl;

    cout << "\nA < B" << endl;
    if (A < B) cout << "Yes" << endl; else cout << "No" << endl;

    cout << "\nA == B" << endl;
    if (A == B) cout << "Yes" << endl; else cout << "No" << endl;

    cout << "\nA++" << endl; cout << A++ << endl;
    cout << "A--" << endl; cout << A-- << endl;
    cout << "++A" << endl; cout << ++A << endl;
    cout << "--A" << endl; cout << --A << endl;

    cout << "Size of class is equal to " << sizeof(Vector3D);

    return 0;
}