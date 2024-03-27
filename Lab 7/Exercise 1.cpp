//#include<iostream>
//using namespace std;
//
//class Complex
//{
//public:
//	Complex(int,int);
//	Complex();
//	Complex& operator+(Complex const& obj);
//	Complex& operator-(Complex const& obj);
//	Complex& operator*(Complex const& obj);
//	void print();
//	friend ostream& operator<<(ostream&, const Complex&);
//	friend istream& operator>>(istream&, Complex&);
//	~Complex();
//
//private:
//	int real;
//	int imaginary;
//};
//
//Complex::Complex(int a,int b)
//{
//	real = a;
//	imaginary = b;
//}
//
//Complex::Complex()
//{
//	real = 0;
//	imaginary = 0;
//}
//
//Complex& Complex::operator+(Complex const& obj)
//{
//	Complex temp;
//	temp.real = this->real + obj.real;
//	temp.imaginary = this->imaginary + obj.imaginary;
//	return temp;
//}
//
//Complex& Complex::operator-(Complex const& obj)
//{
//	Complex temp;
//	temp.real = this->real - obj.real;
//	temp.imaginary = this->imaginary - obj.imaginary;
//	return temp;
//}
//
//Complex& Complex::operator*(Complex const& obj)
//{
//	Complex temp;
//	temp.real = (this->real * obj.real) - (this->imaginary * obj.imaginary);
//	temp.imaginary = (this->real * obj.imaginary) + this->imaginary * obj.real;
//	return temp;
//}
//
//void Complex::print()
//{
//	cout << "Real: " << real << endl;
//	cout << "Imaginary: " << imaginary << endl;
//}
//
//Complex::~Complex()
//{
//}
//
//ostream& operator<<(ostream& out, const Complex& obj)
//{
//	cout << "Real: " << obj.real << endl;
//	cout << "Imaginary: " << obj.imaginary << endl;
//	return out;
//}
//
//istream& operator>>(istream& in,Complex& obj)
//{
//	int n;
//	cout << "Enter real: "; cin >> n;
//	obj.real = n;
//	
//	cout << "Enter imaginary: "; cin >> n;
//	obj.imaginary = n;
//
//	return in;
//}
//
//int main() {
//
//	Complex complex1(3, 2);
//	Complex complex2(5,5);
//
//	/*ADDITION*/
//	Complex complex3 = complex1 + complex2;
//	complex3.print();
//
//	/*SUBTRACTION*/
//	Complex complex4 = complex2 - complex1;
//	complex4.print();
//
//	/*MULTIPLICATION*/
//	Complex complex5 = complex2 * complex1;
//	complex5.print();
//
//	/*COUT OPERATOR*/
//	cout << complex5 << complex4;
//	
//	/*CIN OPERATOR*/
//	Complex complex6;
//	cin >> complex6;
//	complex6.print();
//
//	return 0;
//}
//
//