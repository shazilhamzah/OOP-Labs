//#include<iostream>
//using namespace std;
//
//int main() {
//	const int a = 5;
//	const int b = 10;
//	const int c = 12;
//
//
//	const int* aPtr, * bPtr, * cPtr;
//
//	aPtr = &a;
//	bPtr = &b;
//	cPtr = &c;
//
//	if (*aPtr>=*bPtr && *bPtr>=*cPtr)
//	{
//		cout << "Median is: " << *bPtr;
//	}
//	else if (*bPtr>=*cPtr && *cPtr>=*aPtr)
//	{
//		cout << "Median is: " << *cPtr;
//	}
//	else if (*cPtr>=*aPtr && *aPtr>=*bPtr)
//	{
//		cout << "Median is: " << *aPtr;
//	}
//	else if (*aPtr >= *cPtr && *cPtr >= *bPtr)
//	{
//		cout << "Median is: " << *cPtr;
//	}
//	else if (*cPtr >= *bPtr && *bPtr >= *aPtr)
//	{
//		cout << "Median is: " << *bPtr;
//	}
//	else if (*bPtr >= *aPtr && *aPtr >= *cPtr)
//	{
//		cout << "Median is: " << *aPtr;
//	}
//
//	return 0;
//}