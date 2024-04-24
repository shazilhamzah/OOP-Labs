//#include<iostream>
//#include<string>
//using namespace std;
//
//class Student {
//protected:
//    string name;
//    int studentId;
//
//public:
//    Student(const string& _name, int _studentId) : name(_name), studentId(_studentId) {}
//
//    virtual void displayInfo() const {
//       cout << "Name: " << name << ", Student ID: " << studentId << endl;
//    }
//};
//
//class UndergraduateStudent : public Student {
//private:
//    int year;
//
//public:
//    UndergraduateStudent(const string& _name, int _studentId, int _year)
//        : Student(_name, _studentId), year(_year) {}
//
//    void displayInfo() const override {
//        cout << "Undergraduate Student - ";
//        Student::displayInfo();
//        cout << "Year: " << year << endl;
//    }
//};
//
//class GraduateStudent : public Student {
//private:
//    string researchTopic;
//
//public:
//    GraduateStudent(const string& _name, int _studentId, const string& _researchTopic)
//        : Student(_name, _studentId), researchTopic(_researchTopic) {}
//
//    void displayInfo() const override {
//        cout << "Graduate Student - ";
//        Student::displayInfo();
//        cout << "Research Topic: " << researchTopic << endl;
//    }
//};
//
//int main() {
//    Student** students = new Student*[2];
//    students[0] = new UndergraduateStudent("Alice", 1001, 2);
//    students[1] = new GraduateStudent("Bob", 2001, "Machine Learning");
//
//    students[0]->displayInfo();
//    students[1]->displayInfo();
//
//    delete students[0];
//    delete students[1];
//    delete[]students;
//
//    return 0;
//}
