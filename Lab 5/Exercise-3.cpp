//#include<iostream>
//#include<string>
//using namespace std;
//
//class Student
//{
//public:
//	void setstudentId();
//	void setName();
//	void setGrade();
//	void setGPA();
//	
//	void printstudentId();
//	void printName();
//	void printGrade();
//	void printGPA();
//
//	Student();
//
//private:
//	double studentId;
//	string name;
//	char grade;
//	float GPA;
//};
//
//void Student::setstudentId()
//{
//	cout << "Enter student id: "; cin >> studentId;
//}
//
//void Student::setName()
//{
//	cin.ignore();
//	cout << "Enter student name: "; getline(cin, name);
//}
//
//void Student::setGrade()
//{
//	cout << "Enter grade: "; cin >> grade;
//}
//
//void Student::setGPA()
//{
//	cout << "Enter GPA: "; cin >> GPA;
//}
//
//void Student::printstudentId()
//{
//	cout << "STUDENT ID: " << studentId << endl;
//}
//
//void Student::printName()
//{
//	cout << "Name: " << name << endl;
//}
//
//void Student::printGrade()
//{
//	cout << "Grade: " << grade << endl;
//
//}
//
//void Student::printGPA()
//{
//	cout << "GPA: " << GPA << endl;
//}
//
//Student::Student()
//{
//	studentId = 3213;
//	name = "jkdc";
//	grade = 'A';
//	GPA = 4.0;
//}
//
//
//int main() {
//	Student s1;
//	s1.setstudentId();
//	s1.setName();
//	s1.setGrade();
//	s1.setGPA();
//
//
//	s1.printstudentId();
//	s1.printName();
//	s1.printGrade();
//	s1.printGPA();
//
//
//	char x;
//	cout << "Do you want to upadate? (y/n): "; cin >> x;
//	if (x=='y')
//	{
//		s1.setGrade();
//		s1.setGPA();
//		cout << "Updated details: " << endl;
//		s1.printstudentId();
//		s1.printName();
//		s1.printGrade();
//		s1.printGPA();
//	}
//	
//	
//}
