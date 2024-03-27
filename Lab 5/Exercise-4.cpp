//#include<iostream>
//#include<string>
//using namespace std;
//
//class Product
//{
//public:
//	void setProductID();
//	void setProductName();
//	void setPrice();
//
//	void getProductID();
//	void getProductName();
//	void getPrice();
//
//
//	Product();
//	Product(Product &p2);
//
//private:
//	double productId;
//	string productName;
//	float price;
//};
//
//void Product::setProductID()
//{
//	cout << "Enter product id: "; cin >> productId;
//}
//
//void Product::setProductName()
//{
//	cin.ignore();
//	cout << "Enter product name: "; getline(cin, productName);
//}
//
//void Product::setPrice()
//{
//	cout << "Enter price: "; cin >> price;
//}
//
//void Product::getProductID()
//{
//	cout << "PRODUCT ID: " << productId << endl;
//}
//
//void Product::getProductName()
//{
//	cout << "PRODUCT NAME: " << productName << endl;
//}
//
//void Product::getPrice()
//{
//	cout << "PRODUCT PRICE: " << price<< endl;
//}
//
//
//Product::Product()
//{
//	productId = 0;
//	productName = "none";
//	price = 0;
//}
//
//Product::Product(Product& p2)
//{
//	productId = p2.productId;
//	productName = p2.productName;
//	price = p2.price;
//}
//
//int main() {
//	Product p1;
//	cout << "Product 1: " << endl << endl;
//	p1.setProductID();
//	p1.setProductName();
//	p1.setPrice();
//
//	p1.getProductID();
//	p1.getProductName();
//	p1.getPrice();
//
//	Product p2 = p1;
//	cout << endl << "Product 2 copied: " << endl << endl;
//
//	p2.getProductID();
//	p2.getProductName();
//	p2.getPrice();
//}
