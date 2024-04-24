//#include<iostream>
//#include<string>
//using namespace std;
//
//class Employee
//{
//public:
//	Employee(string n, int id1) { this->name = n; this->id = id1; }
//	string getName() { return name; }
//	int getId() { return id; }
//	virtual void printData() {
//		cout << "Employee data:" << endl;
//		cout << "Name: " << name << endl;
//		cout << "ID: " << id << endl;
//	}
//
//private:
//	string name;
//	int id;
//};
//
//class Manager : public Employee {
//	string managingStatement;
//public:
//	Manager(string n, int id1, string state) :Employee(n, id1) {
//		this->managingStatement = state;
//	}
//	virtual void printData() {
//		cout << "Manager data: " << endl;
//		cout << this->getName() << "\t";
//		cout << this->getId() << "\t";
//		cout << this->managingStatement << "\t"<<endl;
//	}
//};
//
//class Developer : public Employee {
//	string developerStatement;
//public:
//	Developer(string n, int id1, string state) :Employee(n, id1) {
//		this->developerStatement = state;
//	}
//	virtual void printData() {
//		cout << "Developer data: " << endl;
//		cout << this->getName()<<"\t";
//		cout << this->getId() << "\t";
//		cout << this->developerStatement << "\t"<<endl;
//	}
//};
//
//
//int main() {
//	Employee** office = new Employee * [5];
//	office[0] = new Developer("abc", 123, "state1");
//	office[1] = new Developer("def", 456, "state2");
//	office[2] = new Developer("ghi", 789, "state3");
//	office[3] = new Developer("jkl", 10, "state4");
//	office[4] = new Manager("mno", 123, "state6");
//	office[0]->printData();
//	office[1]->printData();
//	office[2]->printData();
//	office[3]->printData();
//	office[4]->printData();
//
//	
//	delete office[0];
//	delete office[1];
//	delete office[2];
//	delete office[3];
//	delete office[4];
//	delete[] office;
//
//	return 0;
//}
