#include <iostream>
#include <cmath>
#include "my_lab9.h"

using namespace std;

double* createPolynomial(int degree) {
    double* poly = new double[degree + 1];
    for (int i = 0; i <= degree; i++) poly[i] = 0.0;
    return poly;
}

void inputPolynomial(double* poly, int degree) {
    for (int i = degree; i >= 0; i--) {
        cout << "Коэффициент при x^" << i << ": ";
        cin >> poly[i];
    }
}

void printPolynomial(double* poly, int degree) {
    bool first = true;
    for (int i = degree; i >= 0; i--) {
        if (poly[i] == 0) continue;
        if (!first && poly[i] > 0) cout << " + ";
        if (poly[i] < 0) cout << " - ";
        double abs_val = abs(poly[i]);
        if (abs_val != 1 || i == 0) cout << abs_val;
        if (i > 0) cout << "x";
        if (i > 1) cout << "^" << i;
        first = false;
    }
    if (first) cout << "0";
    cout << endl;
}

void dividePolynomials(double* p1, int d1, double* p2, int d2, double*& quotient, int& dq, double*& remainder, int& dr) {
    dq = d1 - d2;
    if (dq < 0) {
        dq = 0;
        quotient = createPolynomial(0);
        dr = d1;
        remainder = createPolynomial(dr);
        for (int i = 0; i <= d1; i++) remainder[i] = p1[i];
        return;
    }

    quotient = createPolynomial(dq);
    dr = d1;
    remainder = createPolynomial(dr);
    for (int i = 0; i <= d1; i++) remainder[i] = p1[i];

    while (dr >= d2 && !(dr == 0 && remainder[0] == 0)) {
        double factor = remainder[dr] / p2[d2];
        int power_diff = dr - d2;
        quotient[power_diff] = factor;

        for (int i = 0; i <= d2; i++) {
            remainder[i + power_diff] -= factor * p2[i];
        }

        while (dr > 0 && abs(remainder[dr]) < 1e-9) {
            dr--;
        }
        if (dr == 0 && abs(remainder[0]) < 1e-9) {
            remainder[0] = 0;
            break;
        }
    }
}