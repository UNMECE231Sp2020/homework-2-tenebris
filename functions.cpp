#include <iostream>
#include <cmath>
#include "header.hpp"

Complex::Complex() {
	real = 0;
	imag = 0;
}
Complex::Complex(double _real) {
	*this = Complex(_real, 0);
}
Complex::Complex(double _real, double _imag) {
	real = _real;
	imag = _imag;
}
Complex::Complex(const Complex &comp) {
	real = comp.real;
	imag = comp.imag;
}
double Complex::getReal() {
	return this->real;
}
double Complex::getImag() {
	return this->real;
}
void Complex::print() {
	std::cout << *this << std::endl;
}
Complex Complex::add(Complex comp) {
	Complex temp;
	temp.real = real + comp.real;
	temp.imag = imag + comp.imag;
	return temp;
}
Complex Complex::sub(Complex comp) {
	Complex temp;
	temp.real = real - comp.real;
	temp.imag = imag - comp.imag;
	return temp;
}
Complex Complex::mult(Complex comp) {
	Complex temp;
	temp.real = (real * comp.real) - (imag * comp.imag);
	temp.imag = (real * comp.imag) + (imag * comp.real);
	return temp;
}
Complex Complex::div(Complex comp) {
	if((comp.real == 0) && (comp.imag == 0)) {
		std::cout << "n o" << std::endl;
	}
	Complex temp;
	double div = (comp.real * comp.real) + (comp.imag * comp.imag);
	temp.real = (real * comp.real) + (imag * comp.imag);
	temp.imag = (real * comp.imag) - (imag * comp.real);
	temp.real /= div;
	temp.imag /= div;
	return temp;
}
Complex Complex::conj() {
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
Complex Complex::operator+(Complex comp) {
	return add(comp);
}
Complex Complex::operator-(Complex comp) {
	return comp.sub(*this);
}
Complex Complex::operator*(Complex comp) {
	return mult(comp);
}
Complex Complex::operator/(Complex comp) {
	return div(comp);
}
Complex Complex::operator=(Complex comp) {
	real = comp.real;
	imag = comp.imag;
	return *this;
}
std::ostream& operator<<(std::ostream &out, const Complex &comp) {
	if(comp.imag < 0) {
		double temp = -1 * comp.imag;
		out << comp.real << " - " << temp << "j";
	} else {
		out << comp.real << " + " << comp.imag << "j";
	}
	return out;
}
std::istream& operator>>(std::istream &in, Complex &comp) {
	in >> comp.real >> comp.imag;
	return in;
}