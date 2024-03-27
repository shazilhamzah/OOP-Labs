//#include<iostream>
//using namespace std;
//
//int main() {
//	int size;
//	cout << "Enter n: ";
//	cin >> size;
//	int* arr = new int[size];
//	int a = 0, b = 1, c;
//	*(arr + 0) = a + b;
//	for (int i = 1; i < size; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		*(arr + i) = c;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout<<*(arr + i)<<" ";
//	}
//
//	delete[] arr;
//	arr = nullptr;
//}