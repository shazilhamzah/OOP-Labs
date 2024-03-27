//#include<iostream>
//#include<string>
//using namespace std;
//
//class StringInfo
//{
//public:
//	StringInfo(char*);
//	void display();
//	~StringInfo();
// sdbksdjbvkjsdbvbsvbskjdbvkjsdvkjb
//
//private:
//	char* str = new char[100];
//	int length;
//};
//
//StringInfo::StringInfo(char* str1)
//{
//	cout << "\nConstructor called!" << endl;
//	str = new char[strlen(str1)];
//	for (int i = 0; i < strlen(str1); i++)
//	{
//		*(str + i) = *(str1 + i);
//	}
//	length = strlen(str1);
//}
//
//StringInfo::~StringInfo()
//{
//	cout << "\nDestructor called!" << endl;
//	delete[]str;
//}
//
//void StringInfo::display() {
//	cout << "\nString is: ";
//	for (int i = 0; i < length; i++)
//	{
//		cout << *(str + i);
//	}
//	cout << "\nLength is: " << length<<endl;
//}
//
//int main() {
//	char* str2 = new char[100];
//	cin.getline(str2, 100);
//	StringInfo string1(str2);
//	string1.display();
//}