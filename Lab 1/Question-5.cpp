//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int sizeOfInput,key;
//	int linearSteps=1, binarySteps=1;
//	cout << "Enter size of input: ";
//	cin >> sizeOfInput;
//
//	if (sizeOfInput <= 0)
//	{
//		cout << "Enter a valid size." << endl;
//		return 0;
//	}
//
//	int* keyPtr=&key;
//
//	int* myArray = new int[sizeOfInput];
//
//	for (int i = 0; i < sizeOfInput; i++)
//	{
//		cout << "Enter value: ";
//		cin >> myArray[i];
//	}
//
//	cout << "\nEnter value to find: ";
//	cin >> *keyPtr;
//
//
//	// LINEAR SEARCH
//	for (int i = 0; i < sizeOfInput; i++)
//	{
//		if (myArray[i] == *keyPtr) 
//		{
//			cout << *keyPtr << " found. Value is at index: " << i << endl;
//			break;
//		}
//		else
//		{
//			linearSteps++;
//		}
//	}
//
//	
//	// BINARY SEARCH
//	int start = 0, end = sizeOfInput - 1;
//	for (int i = 0; i < sizeOfInput; i++)
//	{
//		for (int j = i+1; j < sizeOfInput; j++) 
//		{
//			if (myArray[i]>myArray[j])
//			{
//				swap(myArray[i], myArray[j]);
//				binarySteps++;
//			}
//		}
//	}
//
//	while (start<=end)
//	{
//		int ptr = start + (end - start) / 2;
//		if (myArray[ptr] == *keyPtr)
//		{
//			cout << *keyPtr << " found. Value is at index: " << ptr << endl;
//			break;
//		}
//		if (myArray[ptr] > *keyPtr)
//		{
//			end = ptr - 1;
//		}
//		else if(myArray[ptr] < *keyPtr)
//		{
//			start = ptr + 1;
//		}
//		binarySteps++;
//	}
//
//	
//
//	// CLEARING MEAMORY
//	delete[]myArray;
//	myArray = 0;
//
//
//
//	// WHICH ONE IS BETTER?
//	if (linearSteps>binarySteps)
//	{
//		cout << "\n\nAs linear search took place in " << linearSteps << " steps and binary search took place in " << binarySteps;
//		cout << " steps. Therefore binary serch algorithm is better in the given set of inputs.";
//	}
//	else if (linearSteps==binarySteps)
//	{
//		cout << "\n\nAs linear search took place in " << linearSteps << " steps and binary search took place in " << binarySteps;
//		cout << " steps. Therefore both are equally efficent.";
//	}
//	else
//	{
//		cout << "\n\nAs linear search took place in " << linearSteps << " steps and binary search took place in " << binarySteps;
//		cout << " steps. Therefore linear serch algorithm is better in the given set of inputs.";
//	}
//
//	cout << endl << endl;
//}
//
