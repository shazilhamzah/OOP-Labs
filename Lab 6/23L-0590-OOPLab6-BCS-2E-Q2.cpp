//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
//class Student
//{
//public:
//	Student();
//	string getName();
//	int getAge();
//	void setAge(int);
//	void setName(string);
//	void display();
//	~Student();
//
//private:
//	string name;
//	int age;
//};
//
//Student::Student()
//{
//	cout << "Constructor called!" << endl;
//	name = "";
//	age = 0;
//}
//
//string Student::getName()
//{
//	return name;
//}
//
//int Student::getAge()
//{
//	return age;
//}
//
//void Student::setAge(int a)
//{
//	age = a;
//}
//
//void Student::setName(string str)
//{
//	name = str;
//}
//
//void Student::display()
//{
//	cout << "\nStudent name: " << name << endl;
//	cout << "Student age: " << age << endl;
//}
//
//Student::~Student()
//{
//	cout << "\n\nDestructor called!" << endl;
//}
//
//int main() {
//	int number;
//	cout << "Enter number of students: "; cin >> number;
//	Student* std = new Student[number];
//	for (int i = 0; i < number; i++)
//	{
//		cin.ignore();
//		string str;
//		int ageHere;
//		cout << "Enter name for student" << i + 1 << ": ";  
//		getline(cin, str);
//		cout << "Enter age for student" << i + 1 << ": ";  
//		cin>>ageHere;
//		std[i].setName(str);
//		std[i].setAge(ageHere);
//	}
//
//	cout << "\n\nStudets list: "<<endl;
//	for (int i = 0; i < number; i++)
//	{
//		std[i].display();
//	}
//
//	delete[]std;
//}
//
