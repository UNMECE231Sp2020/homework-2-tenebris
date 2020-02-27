#include <iostream>

class Complex {
	private:
		double real;
		double imag;
	public:
		Complex();
		Complex(double _real);
		Complex(double _real, double _imag);
		Complex(const Complex &comp);
		double getReal();
		double getImag();
		void print();
		Complex add(Complex comp);
		Complex sub(Complex comp);
		Complex mult(Complex comp);
		Complex div(Complex comp);
		Complex conj();
		double magnitude();
		double phase();
		Complex operator+(Complex comp);
		Complex operator-(Complex comp);
		Complex operator*(Complex comp);
		Complex operator/(Complex comp);
		Complex operator=(Complex comp);
		friend std::ostream& operator<<(std::ostream &out, const Complex &comp);
		friend std::istream& operator>>(std::istream &in, Complex &comp);
};