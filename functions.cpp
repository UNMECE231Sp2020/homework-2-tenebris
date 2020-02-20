#include <iostream>
#include "header.hpp"
using namespace std;

Complex::Complex() {
	real = 0;
	imag = 0;
}
Complex::Complex(double x, double y) {
	real = x;
	imag = y;
}
Complex::Complex(const Complex &c) {
	real = c.real;
	imag = c.imag;
}
void Complex::print() {
	cout << "Real: " << real << "\nImag: " << imag << endl;
}
Complex operator+(Complex c) {
	Complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
}