//#include<iostream>
//#include<string>
//using namespace std;
//
//class Account {
//	int id;
//	int balance;
//public:
//	Account(int a, int b) { id = a; balance = b; }
//	virtual void print() {
//		cout << "Account: " << id << " " << balance << endl;
//	}
//	int getId() { return id; }
//	int getBalance() { return balance; }
//};
//
//class SavingsAccount : public Account {
//	int savings;
//public:
//	virtual void print() {
//		cout << "Saving:"  << getId() << " " << getBalance() << " " << savings << " " << endl;
//	}
//	SavingsAccount(int a, int b, int n) :Account(a, b) { savings = n; }
//};
//
//class CheckingAccount : public Account {
//	int check;
//public:
//	virtual void print() {
//		cout << "Checking: " << getId() << " " << getBalance() << " " << check << endl;
//	}
//	CheckingAccount(int a, int b, int n) :Account(a, b) { check = n; }
//};
//
//int main() {
//	Account** bank = new Account*[2];
//	bank[0] = new CheckingAccount(1,2,3);
//	bank[1] = new SavingsAccount(2,3,4);
//	bank[0]->print();
//	bank[1]->print();
//}
//
