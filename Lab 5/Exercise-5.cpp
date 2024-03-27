//#include<iostream>
//#include<string>
//using namespace std;
//
//class BankAccount
//{
//public:
//	void setAccountNumber();
//	void setAccountHolderName();
//	void setBalance();
//	
//	void getAccountNumber();
//	void getAccountHolderName();
//	void getBalance();
//
//	
//
//	BankAccount();
//	BankAccount(BankAccount &t);
//
//private:
//	double accountNumber=0;
//	string accountHolderName="";
//	float balance=1;
//};
//
//void BankAccount::setAccountNumber()
//{
//	cout << "Enter account number: "; cin >> accountNumber;
//}
//
//void BankAccount::setAccountHolderName()
//{
//	cin.ignore();
//	cout << "Enter account Holder name: "; getline(cin, accountHolderName);
//}
//
//void BankAccount::setBalance()
//{
//	cout << "Enter balance: "; cin >> balance;
//}
//
//void BankAccount::getAccountNumber()
//{
//	cout << "ACCOUNT NUMBER: " << accountNumber << endl;
//}
//
//void BankAccount::getAccountHolderName()
//{
//	cout << "HOLDER NAME: " << accountHolderName << endl;
//}
//
//void BankAccount::getBalance()
//{
//	cout << "BALANCE: " << balance << endl;
//}
//
//BankAccount::BankAccount()
//{
//	accountNumber = 00000;
//	accountHolderName = "null user";
//	balance = 90000;
//}
//
//BankAccount::BankAccount(BankAccount &t)
//{
//	accountNumber = t.accountNumber;
//	accountHolderName = t.accountHolderName;
//	balance = t.balance;
//}
//
//
//int main() {
//	BankAccount b1;
//	cout << "For first acount: " << endl;
//	b1.setAccountNumber();
//	b1.setAccountHolderName();
//	b1.setBalance();
//	
//	b1.getAccountNumber();
//	b1.getAccountHolderName();
//	b1.getBalance();
//
//	BankAccount b2=b1;
//
//	cout << "For second account: " << endl;
//
//	b2.getAccountNumber();
//	b2.getAccountHolderName();
//	b2.getBalance();
//
//	return 0;
//}