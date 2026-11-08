#ifndef MY_LAB9_H
#define MY_LAB9_H

double* createPolynomial(int degree);
void inputPolynomial(double* poly, int degree);
void printPolynomial(double* poly, int degree);
void dividePolynomials(double* p1, int d1, double* p2, int d2, double*& quotient, int& dq, double*& remainder, int& dr);

#endif