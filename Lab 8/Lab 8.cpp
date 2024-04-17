#include<iostream>
using namespace std;

class Person
{
public:
	void setFname(string str)
	{
		this->fname = str;
	}
	void setLname(string str) {
		this->lname = str;
	}
	string getFname() { return fname; }
	string getLname() { return lname; }
	Person() {}
	Person(string s, string s1) {
		cout << "Person called!" << endl;
		fname = s;
		lname = s1;
	}
	~Person()
	{
		cout << "~Person() called" << endl << endl;
	}

protected:
	int age;

private:
	string fname;
	string lname;
};

class Faculty : public Person {
	int course_count;
	int TEN;
public:
	int getCourseCount() { return course_count; }
	int getTEN() { return TEN; }
	void setCourseCount(int n) { course_count = n; }
	void setTEN(int n) { TEN = n; }
	Faculty(string f, string l, int Age, int m, int n) :Person(f, l) {
		cout << "Faculty parametrized called!" << endl;
		this->course_count = m;
		this->TEN = n;
		age = Age;
		cout << endl;
	}
	~Faculty()
	{
		cout << "~Faculty() called" << endl;
	}
	void print() {
		cout << this->getFname() << " " << this->getLname() << " is " << this->age << " years old, his telephone extension number is: " << this->getTEN() << endl;
	}
};

class Student : public Person {
private:
	float cgpa;

public:
	Student() {}
	Student(string f, string l, float cGpa) : Person(f, l) {
		this->cgpa = cGpa;
		cout << "Student parameterized called!" << endl;
	}
	void setCGPA(float n) { this->cgpa = n; }
	float getCGPA() { return cgpa; }
	~Student()
	{
		cout << "~Student() called" << endl;
	}
};

class Undergraduate : public Student {
	string fyp_name;
public:
	string getFYP() { return fyp_name; }
	void setFYP(string s) { fyp_name = s; }
	void print() { cout << this->getFname() << " " << this->getLname() << " is " << this->age << " years old, his cgpa is: " << this->getCGPA(); }
	Undergraduate(string f, string l, int Age, float cgpa, string Thesis) : Student(f, l, cgpa) {
		cout << "Graduate called!" << endl;
		this->fyp_name = Thesis;
		age = Age;
	}
	~Undergraduate()
	{
		cout << "~Undergraduate() called" << endl;
	}
};
class Graduate : public Student {
	string thesis;
public:
	Graduate(string f, string l, int Age, float cgpa, string Thesis) : Student(f, l, cgpa) {
		cout << "Graduate parameterized called!" << endl;
		this->thesis = Thesis;
		Person::age = Age;
		cout << endl;
	}
	string getThesis() { return thesis; }
	void setThesis(string s) { thesis = s; }
	void print() { cout << this->getFname() << " " << this->getLname() << " is " << this->age << " years old, his cgpa is: " << this->getCGPA(); }
	~Graduate() { cout << "~Graduate() called" << endl; }
};


int main() {
	Graduate graduate("Ted", "Thompson", 22, 3.91, "The Event Locator");
	Undergraduate undergraduate("Arnold", "Gates", 25, 3.01, "Distributed Algorithm");
	Faculty faculty("Richard", "Karp", 45, 2, 420);

	graduate.print(); cout << endl;
	undergraduate.print(); cout << endl;
	faculty.print();

	cout << endl << endl << endl;
	return 0;
}

