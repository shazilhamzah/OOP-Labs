//#include<iostream>
//using namespace std;
//
//
//int* AllocateAndCopyArray(int& size, int* arr, int& a, int& count)
//{
//	int* temp=arr;
//	int b = 1;
//	for (int i = 0; true; i++) {
//		if (i >= size*b)
//		{
//			b++;
//			size *= 2;
//			int* arr1 = new int[size];
//			for (int j = 0; j < i; j++) {
//				*(arr1 + j) = *(arr+j);
//			}
//			temp = arr1;
//		}
//		cout << "Enter value: ";
//		cin >> a;
//		if (a == -1) 
//		{
//			break;
//		}
//		*(temp + i) = a;
//		count++;
//	}
//	return temp;
//}
//
//void OutputArray(int count, int* arr)
//{
//	int start = 0, end = count-1;
//	for (int i = 0; start<=end; i++)
//	{
//		swap(*(arr + start), *(arr + end));
//		start++;
//		end--;
//	}
//	for (int i = 0; i < count; i++)
//	{
//		cout << *(arr + i) << " ";
//	}
//}
//
//int main() {
//	int size = 5,count=0,a;
//	int* arr = new int[size];
//
//	int* temp = AllocateAndCopyArray(size, arr, a, count);
//
//	OutputArray(count, temp);
//
//	delete[] arr;
//	arr = 0;
//}
