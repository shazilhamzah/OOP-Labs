//#include<iostream>
//#include<string>
//using namespace std;
//
//class Product {
//	int price;
//public:
//	Product(int n) { price = n; }
//	int getPrice() { return price; }
//	virtual void print() {
//		cout << "Product: " << " " << getPrice() << endl;
//	}
//};
//
//class Electronics : public Product {
//	int watt;
//public:
//	Electronics(int p, int n) :Product(n) { watt = p; }
//	void print() {
//		cout << "Electronics: " << watt << " " << getPrice() << endl;
//	}
//};
//
//class Clothing : public Product {
//	string type;
//public:
//	Clothing(string ty, int n) :Product(n) { type = ty; }
//	void print() {
//		cout << "Clothing: " << type << " " << getPrice() << endl;
//	}
//};
//
//int main() {
//	Product** products = new Product * [3];
//	products[0] = new Electronics(45, 3500);
//	products[1] = new Clothing("linen", 5200);
//	products[2] = new Electronics(50, 6600);
//
//
//	products[0]->print();
//	products[1]->print();
//	products[2]->print();
//
//
//	delete products[0];
//	delete products[1];
//	delete products[2];
//
//	delete[]products;
//}
