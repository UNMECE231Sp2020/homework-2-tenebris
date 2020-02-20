#include <iostream>
#include <cmath>
#include "header.hpp"

Complex::Complex() {
	real = 0;
	imag = 0;
}
Complex::Complex(double x) {
	real = x;
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
	std::cout << *this << std::endl;
}
Complex Complex::add(Complex c) {
	Complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
}
Complex Complex::sub(Complex c) {
	Complex temp;
	temp.real = real - c.real;
	temp.imag = imag - c.imag;
	return temp;
}
Complex Complex::mult(Complex c) {
	Complex temp;
	temp.real = (real * c.real) - (imag * c.imag);
	temp.imag = (real * c.imag) + (imag * c.real);
	return temp;
}
Complex Complex::div(Complex c) {
	if((c.real == 0) && (c.imag == 0)) {
		std::cout << "n o" << std::endl;
	}
	Complex temp;
	double div = (c.real * c.real) + (c.imag * c.imag);
	temp.real = (real * c.real) + (imag * c.imag);
	temp.imag = (real * c.imag) - (imag * c.real);
	temp.real /= div;
	temp.imag /= div;
	return temp;
}
Complex Complex::con() {
	Complex temp;
	temp.imag = -1 * imag;
	return temp;
}
double Complex::magnitude() {
	return sqrt((real * real) + (imag * imag));
}
double Complex::phase() {
	return atan(imag / real) * 180 / M_PI;
}
Complex Complex::operator+(Complex c) {
	return add(c);
}
Complex Complex::operator-(Complex c) {
	return sub(c);
}
Complex Complex::operator*(Complex c) {
	return mult(c);
}
Complex Complex::operator/(Complex c) {
	return div(c);
}
Complex Complex::operator=(Complex c) {
	real = c.real;
	imag = c.imag;
	return *this;
}
std::ostream& operator<<(std::ostream &out, const Complex &c) {
	if(c.imag < 0) {
		double temp = -1 * c.imag;
		out << c.real << " - " << temp << "i";
	} else {
		out << c.real << " + " << c.imag << "i";
	}
	return out;
}
std::istream& operator>>(std::istream &in, Complex &c) {
	in >> c.real >> c.imag;
	return in;
}