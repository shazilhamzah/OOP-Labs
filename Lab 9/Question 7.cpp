//#include<iostream>
//#include<string>
//using namespace std;
//
//class Item {
//	int price;
//public:
//	Item(int n) { price = n; }
//	int getPrice() { return price; }
//	virtual void print() {
//		cout << "Item: " << " " << getPrice() << endl;
//	}
//};
//
//class Book : public Item {
//	int pages;
//public:
//	Book(int p, int n) :Item(n) { pages = p; }
//	void print() {
//		cout << "Book: " << pages << " " << getPrice() << endl;
//	}
//};
//
//class DVD : public Item {
//	int storage;
//public:
//	DVD(int p, int n) :Item(n) { storage = p; }
//	void print() {
//		cout << "DVD: " << storage << " " << getPrice() << endl;
//	}
//};
//
//int main() {
//	Item** items = new Item * [3];
//	items[0] = new Book(32, 1000);
//	items[1] = new DVD(64, 10000);
//	items[2] = new Book(14, 200);
//
//	for (int i = 0; i < 3; i++)
//	{
//		items[i]->print();
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		delete items[i];
//	}
//	delete[]items;
//}