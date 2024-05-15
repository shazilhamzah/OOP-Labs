//#include <iostream>
//#include <string>
//#include <stdexcept>
//using namespace std;
//
//int getElementAtIndex(int n) {
//	int arr[5] = { 1,2,3,4,5 };
//	try
//	{
//		if (n < 0 || n>4) {
//			throw out_of_range("Out of range error!");
//		}
//		else {
//			return arr[n];
//		}
//	}
//	catch (const std::exception&)
//	{
//		throw;
//	}
//	return 0;
//}
//
//
//int main() {
//	int i;
//	cout << "Enter index: ";
//	cin >> i;
//	try {
//		cout << getElementAtIndex(i);
//	}
//	catch(exception&ex){
//		cerr << ex.what();
//	}
//	
//}