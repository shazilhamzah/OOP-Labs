//#include<iostream>
//#include<string>
//using namespace std;
//
//class Animal {
//	string color;
//	int legs;
//public:
//	Animal(string c, int n) { this->color = c; this->legs = n; }
//	virtual void printData() {
//		cout << "Animal:\t" << this->color << "\t" << this->legs << "\t" << endl;
//	}
//	string getColor() { return color; }
//	int getLegs() { return legs; }
//};
//
//class Dog : public Animal {
//	int barkingIntensityBhauBhau;
//public:
//	virtual void printData() {
//		cout << "Dog:\t" << this->getColor() << "\t" << this->getLegs() << "\t" << "\t" << this->barkingIntensityBhauBhau << endl;
//	}
//	Dog(string c, int l, int n) :Animal(c, l) { barkingIntensityBhauBhau = n; }
//};
//
//class Cat : public Animal {
//	int meowingCutenessLevel;
//public:
//	virtual void printData() {
//		cout << "Cat:\t" << this->getColor() << "\t" << this->getLegs() << "\t" << "\t" << this->meowingCutenessLevel << endl;
//	}
//	Cat(string c, int l, int n) :Animal(c, l) { meowingCutenessLevel = n; }
//};
//
//class Bird : public Animal {
//	int chewchewchewchew;
//public:
//	virtual void printData() {
//		cout << "Bird:\t" << this->getColor() << "\t" << this->getLegs() << "\t" << "\t" << this->chewchewchewchew << endl;
//	}
//	Bird(string c, int l, int n) :Animal(c, l) { chewchewchewchew = n; }
//};
//
//int main() {
//	Animal** animals = new Animal * [3];
//	animals[0] = new Dog("green", 4, 1);
//	animals[1] = new Cat("purple", 4, 2);
//	animals[2] = new Bird("pink",2, 4);
//	for (int i = 0; i < 3; i++)
//	{
//		animals[i]->printData();
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		delete animals[i];
//	}
//
//	delete[]animals;
//}