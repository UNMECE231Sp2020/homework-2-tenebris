#include <iostream>

class Complex {
	private:
		double real;
		double imag;
	public:
		Complex();
		Complex(double, double);
		Complex::Complex(const Complex &c);
		void Complex::print();
		Complex operator+(Complex c);
		Complex operator-(Complex c);
		Complex operator*(Complex c);
		Complex operator/(Complex c);
		Complex conjugate(Complex c);
		double magnitude(Complex c);
		double phase(Complex c);
};