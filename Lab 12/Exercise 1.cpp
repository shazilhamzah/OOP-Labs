//#include<iostream>
//#include<string>
//using namespace std;
//
//template<typename T>
//T GetMax(T tX,T tY) {
//	if (tX > tY)
//		return tX;
//	else
//		return tY;
//}
//
//template<typename T>
//T GetMin(T tX,T tY) {
//	if (tX > tY)
//		return tY;
//	else
//		return tX;
//}
//
//int main()
//{
//	cout << "With <int> <long>:" << endl;
//	int i = 5, j = 6, k;
//	long l = 10, m = 5, n;
//	k = GetMax <int>(i, j);
//	n = GetMin <long> (l, m);
//	cout << "Max: " << k << endl;
//	cout << "Min: " << n << endl;
//
//	cout << "\n\nWithout <int> <long>:" << endl;
//	i = 5, j = 6, k;
//	l = 10, m = 5, n;
//	k = GetMax <int>(i, j);
//	n = GetMin <long>(l, m);
//	cout << "Max: " << k << endl;
//	cout << "Min: " << n << endl;
//	return 0;
//}
//
//template<typename T1,typename T2>
//T1 GetMax(T1 tX, T2 tY) {
//	if (tX > tY)
//		return tX;
//	else
//		return tY;
//}
//
//template<typename T1, typename T2>
//T1 GetMin(T1 tX, T2 tY) {
//	if (tX > tY)
//		return tY;
//	else
//		return tX;
//}
////
////int main()
////{
////	cout << "Part d main function: " << endl;
////	char i = 'Z';
////	int j = 6, k;
////	long l = 10, m = 5, n;
////	k = GetMax <int, long> (i, m);
////	n = GetMin <int, char> (j, l);
////	cout << k << endl;
////	cout << n << endl;
////	return 0;
////}
//
////int main()
////{
////	cout << "Part d main function: " << endl;
////	char i = 'Z';
////	int j = 6, k;
////	long l = 10, m = 5, n;
////	k = GetMax  (i, m);
////	n = GetMin(j, l);
////	cout << k << endl;
////	cout << n << endl;
////	return 0;
////}