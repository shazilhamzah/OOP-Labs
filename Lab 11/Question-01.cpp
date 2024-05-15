//#include<iostream>
//#include<string>
//#include<stdexcept>
//using namespace std;
//
//
//int main() {
//	int a = 5;
//	int b = 0;
//	cin >> a; cin >> b;
//	int div;
//	try {
//		if (b == 0) {
//			throw runtime_error("Division by zero!");
//		}
//		else {
//			div = a / b;
//			cout << "\nResult is: " << div << endl;
//		}
//	}
//	catch (runtime_error& err) {
//		cerr << "Error: " << err.what() << endl;
//	}
//
//	double a1 = 5000000;
//	double b1 = 0;
//	cin >> a1; cin >> b1;
//	double div2;
//	try {
//		if (b1 == 0) {
//			throw runtime_error("Division by zero!");
//		}
//		else {
//			div2 = a1 / b1;
//			cout << "\nResult is: " << div2 << endl;
//		}
//	}
//	catch (runtime_error& err) {
//		cerr << "Error: " << err.what() << endl;
//	}
//	return 0;
//}