//#include<iostream>
//using namespace std;
//
//void copyArray(int* arr, int*& arr1 , int& size,int reduced) {
//	int a = size - reduced;
//	int b=a;
//	arr1 = new int[reduced];
//	for (int i = 0; i < a; i++)
//	{
//		*(arr1 + i) = *(arr + b);
//		b++;
//	}
//	for (int i = 0; i < reduced; i++)
//	{
//		cout<<*(arr1 + i)<<" ";	
//	}
//}
//
//
//void reduceArray(int* arr, int*& arr1, int& size) {
//	int reducedSize;
//	cout << "Enter the reduced size of array: ";
//	cin >> reducedSize;
//	copyArray(arr,arr1,size,reducedSize);
//}
//
//
//int main() {
//	int size;
//	cout << "Enter size: ";
//	cin >> size;
//
//	int* arr = new int[size];
//	int* arr1;
//
//	for (int i = 0; i < size; i++) {
//		cout << "Enter elements: ";
//		cin >> *(arr + i);
//	}
//
//	reduceArray(arr, arr1, size);
//
//	delete[] arr;
//	delete[] arr1;
//}