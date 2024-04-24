//#include <iostream>
//#include <string>
//using namespace std;
//
//class Employee {
//protected:
//string name;
//    int employeeId;
//
//public:
//    Employee(const string& _name, int _employeeId) : name(_name), employeeId(_employeeId) {}
//
//    virtual double calculateSalary() const = 0; 
//
//    virtual void displayInfo() const {
//        cout << "Name: " << name << ", Employee ID: " << employeeId << endl;
//    }
//};
//
//class HourlyEmployee : public Employee {
//private:
//    double hourlyRate;
//    int hoursWorked;
//
//public:
//    HourlyEmployee(const string& _name, int _employeeId, double _hourlyRate, int _hoursWorked)
//        : Employee(_name, _employeeId), hourlyRate(_hourlyRate), hoursWorked(_hoursWorked) {}
//
//    double calculateSalary() const override {
//        return hourlyRate * hoursWorked;
//    }
//
//    void displayInfo() const override {
//        cout << "Hourly Employee - ";
//        Employee::displayInfo();
//        cout << "Hourly Rate: $" << hourlyRate << ", Hours Worked: " << hoursWorked << endl;
//    }
//};
//
//class SalariedEmployee : public Employee {
//private:
//    double monthlySalary;
//
//public:
//    SalariedEmployee(const string& _name, int _employeeId, double _monthlySalary)
//        : Employee(_name, _employeeId), monthlySalary(_monthlySalary) {}
//
//    double calculateSalary() const override {
//        return monthlySalary;
//    }
//
//    void displayInfo() const override {
//        cout << "Salaried Employee - ";
//        Employee::displayInfo();
//        cout << "Monthly Salary: $" << monthlySalary << endl;
//    }
//};
//
//int main() {
//    Employee** emoloyees = new Employee * [2];
//    emoloyees[0] = new HourlyEmployee("John", 1001, 20.0, 40);
//    emoloyees[1] = new SalariedEmployee("Jane", 2001, 5000.0);
//
//    emoloyees[0]->displayInfo();
//    cout << "Calculated Salary: $" << emoloyees[0]->calculateSalary() << endl;
//
//    emoloyees[1]->displayInfo();
//    cout << "Calculated Salary: $" << emoloyees[1]->calculateSalary() << endl;
//
//    delete emoloyees[0];
//    delete emoloyees[1];
//
//    return 0;
//}
