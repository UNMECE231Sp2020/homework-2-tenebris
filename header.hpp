#include <iostream>

class Complex {
	private:
		double real;
		double imag;
	public:
		Complex();
		Complex(double x);
		Complex(double x, double y);
		Complex(const Complex &c);
		void print();
		Complex add(Complex c);
		Complex sub(Complex c);
		Complex mult(Complex c);
		Complex div(Complex c);
		Complex con();
		double magnitude();
		double phase();
		Complex operator+(Complex c);
		Complex operator-(Complex c);
		Complex operator*(Complex c);
		Complex operator/(Complex c);
		Complex operator=(Complex c);
		friend std::ostream& operator<<(std::ostream &out, const Complex &c);
		friend std::istream& operator>>(std::istream &in, Complex &c);
};