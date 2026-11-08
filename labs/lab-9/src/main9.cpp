#include <iostream>
#include "my_lab9.h"

using namespace std;

int main() {
    int d1, d2;
    cout << "Введите степень первого многочлена p1(x): ";
    cin >> d1;
    double* p1 = createPolynomial(d1);
    inputPolynomial(p1, d1);

    cout << "Введите степень второго многочлена p2(x): ";
    cin >> d2;
    if (d2 > d1) {
        cout << "Ошибка: Степень делителя не может быть больше степени делимого!" << endl;
        delete[] p1;
        return 0;
    }

    double* p2 = createPolynomial(d2);
    inputPolynomial(p2, d2);

    cout << "\np1(x) = "; printPolynomial(p1, d1);
    cout << "p2(x) = "; printPolynomial(p2, d2);

    double *quotient = nullptr, *remainder = nullptr;
    int dq = 0, dr = 0;

    dividePolynomials(p1, d1, p2, d2, quotient, dq, remainder, dr);

    cout << "\nЧастное q(x) = "; printPolynomial(quotient, dq);
    cout << "Остаток r(x) = "; printPolynomial(remainder, dr);

    delete[] p1;
    delete[] p2;
    delete[] quotient;
    delete[] remainder;

    return 0;
}