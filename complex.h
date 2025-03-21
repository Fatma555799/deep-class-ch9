#include<iostream>
#include<complex>

using namespace std;
//class complex
//{
//public:
//	complex(int real = 0, int imaginary = 0) { this->real = real; this->imaginary = imaginary; this->all = 0; }
//	void add(complex& other) {
//		double realres = real + other.real;
//		double imagre = imaginary + other.imaginary;
//		all = realres + imagre * i;
//	}
//	void sub(complex& other) {
//		double realres = real - other.real;
//		double imagre = imaginary - other.imaginary;
//		all = realres + imagre * i;
//	}
//	void tostring() {
//		cout << "add is : " << all<<endl;
//	}
//private:
//	int real;
//	int imaginary;
//	double all=0;
//	const double i = sqrt(-1);
//};
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
class rational
{
public:
	rational(int enumrator, int dominator ) {
		int temp=gcd(enumrator,dominator);
		if (dominator == 0)dominator = 1;
		this->dominator = dominator / temp;
		this->enumurator = enumrator / temp;

	};
	void add(rational& r) {
			cout << this->enumurator << "/" << this->dominator << "+" << r.enumurator << "/" << r.dominator << "=" << (r.enumurator * this->dominator + this->enumurator * r.dominator)
				<<"/" << this->dominator * r.dominator << endl;

	}
	void subtr(rational& r) {
		cout << this->enumurator << "/" << this->dominator << "-" << r.enumurator << "/" << r.dominator << "=" << (r.enumurator * this->dominator - this->enumurator * r.dominator)
			<< "/" << this->dominator * r.dominator << endl;
	}
	void mul(rational& r) {
		cout << this->enumurator << "/" << this->dominator << "*" << r.enumurator << "/" << r.dominator << "=" << (r.enumurator * this->dominator)
			<< "/" << this->dominator * r.dominator << endl;
	}
	void div(rational& r) {
		cout << this->enumurator << "/" << this->dominator << "*" << r.enumurator << "/" << r.dominator << "=" << (r.enumurator / this->dominator)
			<< "/" << this->dominator / r.dominator << endl;
	}
	double todoub() {
		double res = enumurator / dominator;
		return res;
	}

private:
	double enumurator;
	double dominator;
};