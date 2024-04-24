//#include<iostream>
//#include<string>
//using namespace std;
//
//class Shape {
//	int area;
//	int id;
//public:
//	Shape(int n) { this->id = n; }
//	int getArea() { return this->area; }
//	void setArea(int n) { this->area = n; }
//	int getID() { return this->id; }
//	void setID(int n) { this->id = n; }
//	virtual void printData() {
//		cout << "Circle\t" << this->getID() << "\t" << this->area<<endl;
//	}
//};
//
//class Circle : public Shape {
//	int radius;
//public:
//	Circle(int n,int radius1):Shape(n) { this->radius = radius1; this->setArea(3.14*radius1*radius1);}
//	virtual void printData() {
//		cout << "Circle\t" << this->getID() << "\t" << this->radius << "\t" << this->getArea()<<endl;
//	}
//
//};
//
//class Rectangle : public Shape {
//	int l;
//	int w;
//public:
//	Rectangle(int len, int wid, int id) :Shape(id) { this->l = len; this->w = wid; this->setArea(l * w); }
//	virtual void printData() {
//		cout << "Rectangle\t" << this->getID() << "\t" << this->l << "\t"<< this->w << "\t" << this->getArea()<<endl;
//	}
//};
//
//int main() {
//	Shape** shapes = new Shape * [3];
//	shapes[0] = new Rectangle(3, 4, 1);
//	shapes[1] = new Rectangle(3, 5, 2);
//	shapes[2] = new Circle(3,4);
//	for (int i = 0; i < 3; i++)
//	{
//		shapes[i]->printData();
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		delete[] shapes[i];
//	}
//	delete[] shapes;
//}