#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class Fraction {
	int num;
	int denum;
public:
	Fraction(int a, int b) {
		num = a;
		denum = b;
	}
	int getNum() { return this->num; }
	int getdenum() { return this->denum; }
	void setNum(int n) { this->num = n; }
	void setdeNum(int n) { this->denum = n; }
};

float divide(Fraction& frac) {
	try {
		if (frac.getdenum() == 0)
		{
			throw runtime_error("Division by zero!");
		}
		else {
			return frac.getNum() / frac.getdenum();
		}
	}
	catch (exception& ex) {
		throw;
	}
}

int main() {
	Fraction f(1, 0);
	Fraction g(1, 2);
	try{
		cout <<"\n" <<divide(f) << endl;
	}
	catch (exception& ex) {
		cerr << ex.what();
	}
	try {
		cout<<"\n"<<divide(g);
	}
	catch (exception& ex) {
		cerr << ex.what();
	}
	return 0;
}