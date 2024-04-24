//#include<iostream>
//#include<string>
//using namespace std;
//
//class Vehicle {
//	int wheels;
//public:
//	Vehicle(int n) { wheels = n; }
//	virtual void print() {
//		cout << "Vehicle: " << wheels << endl;
//	}
//};
//
//class Car : public Vehicle {
//	string color;
//public:
//	void print() {
//		cout << "Car: " << color << endl;
//	}
//	Car(string s, int n) :Vehicle(n) { color = s; }
//};
//
//class Motorcycle : public Vehicle {
//	string color;
//public:
//	void print() {
//		cout << "Bike: " << color << endl;
//	}
//	Motorcycle(string s, int n) :Vehicle(n) { color = s; }
//};
//
//int main() {
//	Vehicle** vehicle = new Vehicle * [2];
//	vehicle[0] = new Car("Blue", 4);
//	vehicle[1] = new Car("Red", 2);
//	vehicle[0]->print();
//	vehicle[1]->print();
//
//	delete[]vehicle[0];
//	delete[]vehicle[1];
//	delete[]vehicle;
//}