//#include<iostream>
//using namespace std;
//
//int* InputArray(int& size) {
//	cout << "Enter size of array: ";
//	cin >> size;
//
//	int* arr = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter value: ";
//		cin >> *(arr + i);
//	}
//	return arr;
//}
//
//void OutputArray(const int& size, int* arrPtr)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(arrPtr + i) << " ";
//	}
//}
//
//int main() {
//	int size;
//	int* arrPtr = InputArray(size);
//	OutputArray(size, arrPtr);
//	delete[] arrPtr;
//	arrPtr = 0;
//}
//
