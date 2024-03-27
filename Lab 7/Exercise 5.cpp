//#include<iostream>
//using namespace std;
//
//class FlagRegister
//{
//public:
//	FlagRegister() { bits = 0; }
//	FlagRegister(int a) { bits = a; }
//	
//	bool operator&(const FlagRegister& obj) { return this->bits & obj.bits; }
//	bool operator|(const FlagRegister& obj){ return this->bits | obj.bits; }
//	bool operator^(const FlagRegister& obj){ return this->bits ^ obj.bits; }
//
//
//private:
//	unsigned int bits;
//};
//
//
//int main() {
//	FlagRegister fg1(15);
//	FlagRegister fg2(15);
//
//	bool a = fg1 & fg2;
//	bool b = fg1 | fg2;
//	bool c = fg1 ^ fg2;
//
//	cout << "&: " << a << endl;
//	cout << "|: " << b << endl;
//	cout << "^: " << c << endl;
//}