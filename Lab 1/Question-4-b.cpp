//#include<iostream>
//using namespace std;
//
//int main() {
//	int sizeOfInput;
//	int linearSteps=1, binarySteps=1;
//	cout << "Enter size of input: ";
//	cin >> sizeOfInput;
//
//	if (sizeOfInput<=0)
//	{
//		cout << "Enter a valid size." << endl;
//		return 0;
//	}
//
//
//	int* myArray = new int[sizeOfInput];
//
//	for (int i = 0; i < sizeOfInput; i++)
//	{
//		cout << "Enter value: ";
//		cin >> myArray[i];
//	}
//
//	for (int i = 0; i < sizeOfInput; i++)
//	{
//		for (int j = i+1; j < sizeOfInput; j++) 
//		{
//			if (myArray[i]>myArray[j])
//			{
//				swap(myArray[i], myArray[j]);
//			}
//		}
//	}
//
//	if (sizeOfInput % 2 != 0)
//	{
//		cout << "Median is: " << myArray[(sizeOfInput - 1) / 2] << " at index " << myArray[(sizeOfInput - 1) / 2] << endl;
//		cout << "After replacing median with -1, the new array becomes: ";
//		for (int i = 0; i < sizeOfInput; i++)
//		{
//			myArray[(sizeOfInput - 1) / 2] = -1;
//			cout << myArray[i] << "\t";
//		}
//		cout << endl;
//		return 0;
//	}
//
//	else if (sizeOfInput % 2 == 0)
//	{
//		double median = ((myArray[sizeOfInput / 2] + myArray[(sizeOfInput / 2) - 1]) / 2);
//		cout << "Median is: " << median << endl;
//		cout << "After replacing median with -1, the new array becomes: ";
//		myArray[sizeOfInput / 2] = -1;
//		myArray[(sizeOfInput / 2) - 1]=-1;
//		for (int i = 0; i < sizeOfInput; i++)
//		{	
//			cout << myArray[i] << "\t";
//		}
//		cout << "\nThe median is the average of both numbers replaced by -1." << endl;
//	}
//
//	return 0;
//}